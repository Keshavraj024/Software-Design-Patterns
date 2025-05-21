module;

#include <string>

export module VehicleInterface;

export class IVehicle{
    public:
        virtual ~IVehicle() = default;
        virtual void addPaint(const std::string& color) = 0;
        virtual void testDrive() = 0;
        virtual void assemble() = 0;
        virtual std::string getVehicleType() const = 0;
};