#include "../include/Logger.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <sstream>

Logger::Logger(const std::string &filename, LogLevel minLevel) : minLogLevel(minLevel)
{
    logFile.open(filename, std::ios_base::app);
    if (!logFile.is_open())
    {
        std::cerr << "Не удалось открыть файл лога: " << filename << std::endl;
        perror("Ошибка открытия файла");
    }
}

Logger::~Logger()
{
    if (logFile.is_open())
    {
        logFile.close();
    }
}

void Logger::log(LogLevel level, const std::string &message)
{
    if (level >= minLogLevel)
    {
        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);

        std::stringstream ss;
        ss << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S") << " [" << levelToString(level) << "] " << message << std::endl;

        logFile << ss.str();
    }
}

std::string Logger::levelToString(LogLevel level)
{
    switch (level)
    {
    case LogLevel::DEBUG:
        return "DEBUG";
    case LogLevel::INFO:
        return "INFO";
    case LogLevel::WARNING:
        return "WARNING";
    case LogLevel::ERROR:
        return "ERROR";
    case LogLevel::CRITICAL:
        return "CRITICAL";
    default:
        return "UNKNOWN";
    }
}