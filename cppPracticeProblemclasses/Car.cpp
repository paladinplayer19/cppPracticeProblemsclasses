#include "Car.h"
Car::Car() : make(), model(), doorNumb(), milage(), milesPerGallon(), petroLevel()
{

}

void Car::Print()
{
	std::cout << "The information regarding your car is as follows:\n" " Make - " << make << "\n" << " Model - " << model << "\n" << " Number of Doors - " << doorNumb << "\n" << " Milage - " << milage << "\n" << " Miles Per Gallon - " << milesPerGallon << "\n" << " Petrol level - " << petroLevel << "\n";
}
