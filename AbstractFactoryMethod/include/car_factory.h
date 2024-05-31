#pragma once

#include "vehicle_factory.h"
#include "car_engine.h"
#include "car_wheels.h"

class CarFactory : public IVehicleFactory
{

public:
    std::unique_ptr<IEngine> createEngine()
    {
        return std::make_unique<CarEngine>();
    }
    std::unique_ptr<IWheel> createWheels()
    {
        return std::make_unique<CarWheel>();
    }
};