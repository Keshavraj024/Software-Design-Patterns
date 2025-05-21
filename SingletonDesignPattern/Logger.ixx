module;

#include <string>
#include <filesystem>

export module Logger;

export enum class LOG_LEVEL : int{
    LOG_INFO = 0,
    LOG_DEBUG = 1,
    LOG_WARN = 2,
    LOG_CRITICAL = 3,
    LOG_ERROR = 4,
};


export class Logger{
    private:
        Logger();
        LOG_LEVEL level;
    public:
        static Logger& getInstance();
        void LogMessage(const std::string& message, LOG_LEVEL logLevel = LOG_LEVEL::LOG_INFO);
        void setLogLevel(LOG_LEVEL logLevel);

};