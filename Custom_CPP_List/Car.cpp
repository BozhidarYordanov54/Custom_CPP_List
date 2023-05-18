#include "Car.h"

Car::Car(std::string make, std::string model, std::string color, int numDoors, bool isElectric)
    : Vehicle(make, model, color)
{
    NumDoors = numDoors;
    IsElectric = isElectric;
}