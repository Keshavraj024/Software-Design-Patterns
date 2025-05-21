module;

#include <iostream>
#include <string>

module TruckVehicle;


void Truck::addPaint(const std::string& color){
    std::cout << "Adding Paint of color " << color << " to Truck " << std::endl;
}

void Truck::testDrive(){
    std::cout << "Test Driving the Truck" << std::endl;
}

void Truck::assemble(){
    std::cout << "Assembling Truck " << std::endl;
}

std::string Truck::getVehicleType() const {
    std::cout << "Truck" << std::endl;
    return std::string("Truck");
}