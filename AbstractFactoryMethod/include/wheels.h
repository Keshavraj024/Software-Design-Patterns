#pragma once

class IWheel
{
public:
    virtual void rotate() = 0;
    virtual double getTirePressure() = 0;
};