#ifndef VEHICLEDATAPROVIDER_H
#define VEHICLEDATAPROVIDER_H


class VehicleDataProvider
{

private:
        double latitude_m;
        double longitude_m;
        double velocity_m;
        double acceleration_m;
public:
    VehicleDataProvider(double latitude_val,double longitude_val,double velocity_val,double acceleration_val);
    ~VehicleDataProvider();





    double get_longitude() {return longitude_m;}
    double get_latitude() {return latitude_m;}
    double get_velocity() {return velocity_m;}
    double get_acceleration() {return acceleration_m;}
    void GetVehicleDataFromSocket() ;
    void display ();




};

#endif // VEHICLEDATAPROVIDER_H
