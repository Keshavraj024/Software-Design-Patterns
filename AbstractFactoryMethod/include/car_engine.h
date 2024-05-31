#pragma once

#include "engine.h"

class CarEngine : public IEngine
{
public:
    void start() override;
    void stop() override;
};