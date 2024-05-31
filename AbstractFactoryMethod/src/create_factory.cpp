#include <memory>
#include <string>
#include "car_factory.h"
#include "truck_factory.h"

class CreateFactory
{
public:
    static std::unique_ptr<IVehicleFactory> createVehiceFactory(const std::string &vehicleType)
    {
        if (vehicleType == "Car")
            return std::make_unique<CarFactory>();
        if (vehicleType == "Truck")
            return std::make_unique<TruckFactory>();
        return std::make_unique<TruckFactory>();
    }
};