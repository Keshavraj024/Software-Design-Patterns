#pragma once

#include "engine.h"

class TruckEngine : public IEngine
{
public:
    void start() override;
    void stop() override;
};