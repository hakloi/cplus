#include <string>
#include <fstream>

enum class LogLevel
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    CRITICAL
};

class Logger
{
    private:
        std::ofstream logFile;
        //логгер, записывающий только сообщения заданного уровня и выше
        LogLevel minLogLevel;

    public:
        Logger(const std::string &filename, LogLevel minLevel = LogLevel::DEBUG);
        ~Logger(); //destructor -для освобождения ресурсов и закрытия logFile

        /**Метод log с одним текстовым аргументом, записывающий переданный аргумент в конец файла лога*/
        void log(LogLevel level, const std::string &message);
        static std::string levelToString(LogLevel level);
};