#include <SFML/Graphics.hpp>
#include <iostream>

void setupRectangle(sf::RectangleShape& rect, sf::Vector2i firstClick, sf::Vector2i secondClick) {
    sf::Vector2f size(std::abs(secondClick.x - firstClick.x),
                      std::abs(secondClick.y - firstClick.y));

    rect.setSize(size);

    // independence from 1st, 2nd click 
    rect.setPosition(std::min(firstClick.x, secondClick.x), 
                     std::min(firstClick.y, secondClick.y));

    rect.setFillColor(sf::Color::Magenta);
}

int main() {
    sf::RenderWindow window(sf::VideoMode(1600, 800), "My first SFML window");

    sf::Vector2i firstClick;  
    sf::RectangleShape rect; 
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
                        setupRectangle(rect, firstClick, secondClick);
                        drawing = false;
                        finalized = true;
                    }
                }
                break;

            case sf::Event::Resized:
                window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
                break;
            }
        }

        window.clear(sf::Color(128, 128, 128));

        if (drawing) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);

            sf::RectangleShape tempRect;
            setupRectangle(tempRect, firstClick, mousePos);
            tempRect.setFillColor(sf::Color(0, 0, 0, 0)); // without color 
            tempRect.setOutlineThickness(2);
            tempRect.setOutlineColor(sf::Color::Cyan);

            window.draw(tempRect);
        }

        if (finalized) {
            window.draw(rect);
        }

        window.display();
    }

    return 0;
}
