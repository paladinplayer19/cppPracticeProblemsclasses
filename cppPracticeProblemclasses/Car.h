#pragma once

#include <string>
#include <iostream>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel);
	~Car();
	

	void Print();
	void Drive(int numMiles);

	std::string make;
	std::string model;
	int doorNumb;
	int milage;
	int milesPerGallon;
	float petrolLevel;

};	