#include "Truck.h"

Truck::Truck(std::string make, std::string model, std::string color, int numAxles, bool hasTrailer)
    : Vehicle(make, model, color)
{
    NumAxles = numAxles;
    HasTrailer = hasTrailer;
}