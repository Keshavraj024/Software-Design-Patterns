#include <iostream>
#include "create_factory.cpp"

int main()
{
    std::string vehicleType{"Truck"};
    auto vehicleFactory = CreateFactory::createVehiceFactory(vehicleType);
    auto vehicleEngine = vehicleFactory->createEngine();
    auto vehicleWheels = vehicleFactory->createWheels();
    vehicleEngine->start();
    vehicleEngine->stop();

    vehicleWheels->rotate();
    auto tirePressure = vehicleWheels->getTirePressure();
    std::cout << "The tire pressure of " << vehicleType << " is: " << tirePressure << std::endl;
    return 0;
}