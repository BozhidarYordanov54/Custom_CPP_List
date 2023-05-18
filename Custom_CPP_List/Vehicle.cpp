#include "Vehicle.h"

Vehicle::Vehicle(std::string make, std::string model, std::string color, int year)
{
    Make = make;
    Year = year;
    Model = model;
    Color = color;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle)
{
    os << vehicle.Make << " " << vehicle.Model << " " << vehicle.Color << std::endl;
    return os;
}

bool Vehicle::operator==(const Vehicle& obj) const
{
    return Color == obj.Color;
}