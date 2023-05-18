#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle
{
public:
    Vehicle(std::string make = "None", std::string model = "None", std::string color = "None", int year = 0);

    std::string Make;
    std::string Model;
    int Year;
    std::string Color;

    friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);

    bool operator==(const Vehicle& obj) const;

private:
    // any private member variables or functions
};

#endif // VEHICLE_H
