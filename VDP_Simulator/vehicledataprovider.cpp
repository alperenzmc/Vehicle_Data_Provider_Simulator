#include "vehicledataprovider.h"
#include <iostream>

VehicleDataProvider::VehicleDataProvider(double latitude_val,double longitude_val,double velocity_val,double acceleration_val)
    : latitude_m{latitude_val}, longitude_m{longitude_val}, velocity_m{velocity_val}, acceleration_m{acceleration_val}
{

}

VehicleDataProvider::~VehicleDataProvider(){

}



void VehicleDataProvider::display() {
    std::cout<<"Latitude is: "<<latitude_m<<std::endl;
    std::cout<<"Longitude is: "<<longitude_m<<std::endl;
    std::cout<<"Velocity is: "<<velocity_m<<std::endl;
    std::cout<<"Acceleration is: "<<acceleration_m<<std::endl;
}
