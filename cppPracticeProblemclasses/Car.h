#pragma once

#include <string>
#include <iostream>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel);
	

	void Print();
	void Drive();

	std::string make;
	std::string model;
	int doorNumb;
	int milage;
	int milesPerGallon;
	int petrolLevel;

};