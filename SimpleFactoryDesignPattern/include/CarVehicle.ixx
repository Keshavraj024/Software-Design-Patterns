module;

#include <string>

export module CarVehicle;

import VehicleInterface;

export class Car : public IVehicle{
    void addPaint(const std::string& color) override;
    void testDrive() override;
    void assemble() override;
    std::string getVehicleType() const override;
};
