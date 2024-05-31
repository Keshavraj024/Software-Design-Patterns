#include <iostream>
#include "car_wheels.h"

void CarWheel::rotate()
{
    std::cout << "Car Wheels started rotated " << std::endl;
}
double CarWheel::getTirePressure()
{
    return 20.0;
}
