#include "Car.h"
Car::Car() : make(), model(), doorNumb(), milage(0), milesPerGallon(), petrolLevel(100)
{

}

Car::Car(std::string newMake, std::string newModel) : make(newMake), model(newModel), doorNumb(), milage(0), milesPerGallon(), petrolLevel(100)
{
}

void Car::Print()
{
	std::cout << "The information regarding your car is as follows:\n" " Make - " << make << "\n" << " Model - " << model << "\n" << " Number of Doors - " << doorNumb << "\n" << " Milage - " << milage << "\n" << " Miles Per Gallon - " << milesPerGallon << "\n" << " Petrol level - " << petrolLevel << "\n";
}

void Car::Drive()
{
	milage += milesPerGallon;
	petrolLevel -= milesPerGallon;
}
