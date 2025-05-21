module;

#include <iostream>
#include <string>

module CarVehicle;


void Car::addPaint(const std::string& color){
    std::cout << "Adding Paint of color " << color << " to car " << std::endl;
}

void Car::testDrive(){
    std::cout << "Test Driving the Car" << std::endl;
}

void Car::assemble(){
    std::cout << "Assembling Car " << std::endl;
}

std::string Car::getVehicleType() const {
    std::cout << "Car" << std::endl;
    return std::string("Car");
}