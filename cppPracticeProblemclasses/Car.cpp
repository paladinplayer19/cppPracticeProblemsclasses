#include "Car.h"
Car::Car() : make(), model(), doorNumb(), milage(0), milesPerGallon(), petrolLevel(100)
{

}

Car::Car(std::string newMake, std::string newModel) : make(newMake), model(newModel), doorNumb(), milage(0), milesPerGallon(), petrolLevel(10)
{
	if (make == "Ford" || make == "ford") {

		model = "Puma";
		doorNumb = 4;
		milesPerGallon = 46;
		
	}
	else if (make == "Volkswagen" || make == "volkswagen")
	{

		model = "Polo";
		doorNumb = 3;
		milesPerGallon = 58;
	}
	else if (make == "Toyota" || make == "toyota") {

		model = "Yaris";
		doorNumb = 5;
		milesPerGallon = 60;
	}
	else
	{
		make = "Generic";
		model = "plain";
		doorNumb = 4;
		milesPerGallon = 55;
	}
}

void Car::Print()
{
	std::cout << "The information regarding your car is as follows:\n" " Make - " << make << "\n" << " Model - " << model << "\n" << " Number of Doors - " << doorNumb << "\n" << " Milage - " << milage << "\n" << " Miles Per Gallon - " << milesPerGallon << "\n" << " Petrol level - " << petrolLevel << "\n";
}

void Car::Drive(int numMiles)
{
	milage += numMiles;
	petrolLevel -= ((float)numMiles / (float)milesPerGallon);
}
