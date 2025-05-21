module;

#include <iostream>

module Logger;

Logger::Logger(){
    std::cout << "Constructor is called " << std::endl;
    level = LOG_LEVEL::LOG_INFO;
}

void Logger::setLogLevel(LOG_LEVEL logLevel){

    level = logLevel;
}

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}

void Logger::LogMessage(const std::string& message, LOG_LEVEL logLevel){
    std::string logType;
    if(logLevel >= level){
        switch(logLevel){
            case LOG_LEVEL::LOG_INFO:
                logType = "INFO";
                break;
            case LOG_LEVEL::LOG_DEBUG:
                logType = "DEBUG";
                break;
            case LOG_LEVEL::LOG_WARN:
                logType = "WARN";
                break;
            case LOG_LEVEL::LOG_CRITICAL:
                logType = "CRITICAL";
                break;
            case LOG_LEVEL::LOG_ERROR:
                logType = "ERROR";
                break;
        };
        std::cout << logType << ":"  << message << std::endl;
    }
}
