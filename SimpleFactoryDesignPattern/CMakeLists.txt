# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(DocumentFactory)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(VEHICLE_SOURCES
    src/main.cpp
    src/CarVehicle.cpp
    src/TruckVehicle.cpp
)

# Add executable target
add_executable(VehicleFactory ${VEHICLE_SOURCES})

target_sources(VehicleFactory
        PUBLIC
        FILE_SET CXX_MODULES FILES
        include/IVehicle.ixx
        include/CarVehicle.ixx
        include/TruckVehicle.ixx
        include/VehicleFactory.ixx
)
