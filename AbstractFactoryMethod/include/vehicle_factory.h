#pragma once

#include <memory>
#include "engine.h"
#include "wheels.h"

class IVehicleFactory
{
public:
    virtual std::unique_ptr<IEngine> createEngine() = 0;
    virtual std::unique_ptr<IWheel> createWheels() = 0;
};