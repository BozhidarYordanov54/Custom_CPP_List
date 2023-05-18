#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car(std::string make = "None", std::string model = "None", std::string color = "None", int numDoors = 0, bool isElectric = false);

    int NumDoors;
    bool IsElectric;

private:
    // any private member variables or functions
};

#endif // CAR_H
