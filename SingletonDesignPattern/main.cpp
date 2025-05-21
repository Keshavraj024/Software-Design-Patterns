import Logger;
#include <cassert>
#include <thread>

int main(){
    Logger& Log1 = Logger::getInstance();
    
    Log1.LogMessage("I am Singleton Class");

    Log1.setLogLevel(LOG_LEVEL::LOG_ERROR);

    Log1.LogMessage("I am critical error", LOG_LEVEL::LOG_DEBUG);

    Logger& Log2 = Logger::getInstance();

    Logger& Log3 = Logger::getInstance();

    assert(&Log1 == &Log2);


    return 0;
}