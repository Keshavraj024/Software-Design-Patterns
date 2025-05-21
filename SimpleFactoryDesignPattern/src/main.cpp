
#include <memory>

import VehicleInterface;
import VehicleFactory;

int main(){

    std::unique_ptr<IVehicle> TruckVehicle = VehicleFactory::CreateVehicleFactory("Truck");

    TruckVehicle->testDrive();
    TruckVehicle->addPaint("Baby Pink");

    std::unique_ptr<IVehicle> CarVehicle = VehicleFactory::CreateVehicleFactory("Car");

    CarVehicle->testDrive();
    CarVehicle->addPaint("Baby Pink");

    return 0;
}