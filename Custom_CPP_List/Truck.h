#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    Truck(std::string make = "None", std::string model = "None", std::string color = "None", int numAxles = 0, bool hasTrailer = false);

    int NumAxles;
    bool HasTrailer;

private:
    // any private member variables or functions
};

#endif // TRUCK_H
