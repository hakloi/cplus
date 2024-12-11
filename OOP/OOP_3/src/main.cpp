#include "../include/Logger.h"
#include <iostream>
#include <string>
#include <limits> // для std::numeric_limits

int main()
{
    std::string filePath = "../OOP_3/out/";
    std::string userInput;
    std::string inputMessage;
    char continueLogging = 'y';
    LogLevel logLevel = LogLevel::INFO; // Уровень логирования по умолчанию

    std::cout << "Запиши имя файла, в котором будут храниться логи (без расширения): ";
    std::cin >> userInput;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очищаем буфер

    Logger logger(filePath + userInput + ".txt", LogLevel::DEBUG); // Теперь минимальный уровень DEBUG

    while (continueLogging == 'y' || continueLogging == 'Y')
    {
        std::cout << "Введите 'q' для выхода или номер уровня логирования:\n";
        std::cout << "1. DEBUG\n";
        std::cout << "2. INFO\n";
        std::cout << "3. WARNING\n";
        std::cout << "4. ERROR\n";
        std::cout << "5. CRITICAL\n";
        std::cout << "Введите ваш выбор: ";

        std::string input;
        std::getline(std::cin, input); // Читаем всю строку

        if (input == "q" || input == "Q")
        {
            continueLogging = 'n';
            break; // Выход из цикла
        }

        try
        {
            int levelChoice = std::stoi(input); // Преобразуем в int

            if (levelChoice >= 1 && levelChoice <= 5)
            {
                logLevel = static_cast<LogLevel>(levelChoice - 1);
            }
            else
            {
                std::cout << "Неверный номер уровня. Попробуйте ещё раз.\n";
                continue; // Переход к следующей итерации
            }

            std::cout << "Введите сообщение для логирования: ";
            std::getline(std::cin, inputMessage);
            logger.log(logLevel, inputMessage);
        }
        catch (const std::invalid_argument &e)
        {
            std::cout << "Неверный ввод. Введите число от 1 до 5 или 'q' для выхода.\n";
        }
        catch (const std::out_of_range &e)
        {
            std::cout << "Неверный ввод. Число слишком большое.\n";
        }
    }

    std::cout << "Логирование завершено." << std::endl;
    return 0;
}