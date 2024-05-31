#pragma once
#include "wheels.h"


class CarWheel: public IWheel{
    public:
        void rotate() override;
        double getTirePressure() override;

};