#include "Car.h"
Car::Car() : make(), model(), doorNumb(0), milage(0), milesPerGallon(0), petrolLevel(8)
{

}

Car::Car(std::string newMake, std::string newModel) : make(newMake), model(newModel), doorNumb(0), milage(0), milesPerGallon(0), petrolLevel(8)
{
	if (make == "Ford" || make == "ford") {

		doorNumb = 4;
		milesPerGallon = 46;
		
	}
	else if (make == "Volkswagen" || make == "volkswagen")
	{

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

Car::~Car()
{
}
void Car::SetPetrol(float newPetrolLevel)
{
	petrolLimit = 100.0f;

	petrolLevel += newPetrolLevel;

	if (petrolLevel > petrolLimit)
	{
		petrolLevel = petrolLimit;
		std::cout << "Looks like the tank has reached its limit and started to spill out the car." << std::endl;
	}
}

float Car::GetPetrol()
{
	return petrolLevel;
}

std::string Car::GetMake()
{
	return std::string(make);
}

std::string Car::GetModel()
{
	return std::string(model);
}

int Car::GetMilage()
{
	return milage;
}


void Car::Print()
{
	std::cout << "\nThe information regarding your car is as follows:\n" " Make - " << make << "\n" << " Model - " << model << "\n" << " Number of Doors - " << doorNumb << "\n" << " Milage - " << milage << "\n" << " Miles Per Gallon - " << milesPerGallon << "\n" << " Petrol level - " << petrolLevel << "\n";
}

void Car::Drive(int numMiles)
{
	milage += numMiles;
	petrolLevel -= ((float)numMiles) / ((float)milesPerGallon);
	
}
