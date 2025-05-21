module;

#include <string>

export module TruckVehicle;

import VehicleInterface;

export class Truck : public IVehicle{
    void addPaint(const std::string& color) override;
    void testDrive() override;
    void assemble() override;
    std::string getVehicleType() const override;
};
