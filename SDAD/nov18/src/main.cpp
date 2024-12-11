#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <vector>

sf::Color randColor()
{
    int r = rand() % 256;
    int g = rand() % 256;
    int b = rand() % 256;
    return sf::Color(r, g ,b);
}

void setupRectangle(sf::RectangleShape& rect, sf::Vector2i firstClick, sf::Vector2i secondClick) {
    sf::Vector2f size(std::abs(secondClick.x - firstClick.x),
                      std::abs(secondClick.y - firstClick.y));

    rect.setSize(size);

    // independence from 1st, 2nd click 
    rect.setPosition(std::min(firstClick.x, secondClick.x), 
                     std::min(firstClick.y, secondClick.y));

    rect.setFillColor(randColor());
}

int main() {
    sf::RenderWindow window(sf::VideoMode(1600, 800), "My first SFML window");

    sf::Vector2i firstClick; 
    std::vector<sf::RectangleShape> rectangles; 
    sf::RectangleShape tempRect;
    bool drawing = false;    // frame
    bool finalized = false;  // current rectange

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::MouseButtonPressed:
                if (event.mouseButton.button == sf::Mouse::Button::Left) {
                    if (!drawing) {
                        firstClick = sf::Vector2i(event.mouseButton.x, event.mouseButton.y);
                        drawing = true;
                        finalized = false;
                    } else {
                        sf::Vector2i secondClick(event.mouseButton.x, event.mouseButton.y);
                        sf::RectangleShape newRect;
                        setupRectangle(newRect, firstClick, secondClick);
                        rectangles.push_back(newRect);
                        drawing = false;
                        finalized = true;
                    }
                }
                else if (event.mouseButton.button == sf::Mouse::Button::Right) {
                    sf::Vector2i clickPos(event.mouseButton.x, event.mouseButton.y);
                    // reverse order
                    for (auto it = rectangles.rbegin(); it != rectangles.rend(); ++it) {
                        if (it->getGlobalBounds().contains(clickPos.x, clickPos.y)) {
                            rectangles.erase((it + 1).base()); 
                            break; 
                        }
                    }
                    // if (rectangles.size() != 0){
                    //     rectangles.pop_back();
                    // }
                }
                break;


            case sf::Event::Resized:
                window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
                break;
            }
        }

        window.clear(sf::Color(128, 128, 128));

        for (auto& rect : rectangles)
        {
            window.draw(rect);
        }

        if (drawing) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);

            sf::RectangleShape tempRect;
            setupRectangle(tempRect, firstClick, mousePos);
            tempRect.setFillColor(sf::Color(0, 0, 0, 0)); // without color 
            tempRect.setOutlineThickness(2);
            tempRect.setOutlineColor(sf::Color::Cyan);

            window.draw(tempRect);
        }

        // if (finalized) {
        //     window.draw(rect);
        // }

        window.display();
    }

    return 0;
}
