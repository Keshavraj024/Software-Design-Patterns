module;

#include <memory>
#include <string>

export module VehicleFactory;

import VehicleInterface;
import CarVehicle;
import TruckVehicle;

export class VehicleFactory{
    public:
        static std::unique_ptr<IVehicle> CreateVehicleFactory(const std::string& factoryType){
            if(factoryType == "Car"){
                return std::make_unique<Car>();
            }
            if(factoryType == "Truck"){
                return std::make_unique<Truck>();
            }
            return nullptr;
        }
};
