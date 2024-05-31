#pragma once

#include "vehicle_factory.h"
#include "truck_engine.h"
#include "truck_wheels.h"

class TruckFactory : public IVehicleFactory
{

public:
    std::unique_ptr<IEngine> createEngine()
    {
        return std::make_unique<TruckEngine>();
    }
    std::unique_ptr<IWheel> createWheels()
    {
        return std::make_unique<TruckWheel>();
    }
};