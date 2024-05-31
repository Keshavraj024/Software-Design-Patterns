#pragma once

#include "wheels.h"


class TruckWheel: public IWheel{
    public:
        void rotate() override;
        double getTirePressure() override;

};