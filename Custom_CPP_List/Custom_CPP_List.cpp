#include <iostream>
#include "List.cpp"
#include "Car.h"
#include "Truck.h"


int main()
{
	List<int> intList;
	intList.add(1);
	intList.add(2);
	intList.add(3);
	intList.print();

	List<std::string> stringList;
	stringList.add("hello ");
	stringList.add("world");
	stringList.print();

	List<Car> carList;
	Car car1("Toyota", "Corolla", "Red", 4, false);
	Car car2("Tesla", "Model S", "Black", 4, true);
	carList.add(car1);
	carList.add(car2);
	carList.print();

	List<Truck> truckList;
	Truck truck1("Ford", "F-150", "Blue", 2, false);
	Truck truck2("Chevrolet", "Silverado", "Red", 3, true);
	truckList.add(truck1);
	truckList.add(truck2);
	std::cout << truckList.equals(truck1, truck2) << std::endl;
	truckList.print();

	return 0;
}