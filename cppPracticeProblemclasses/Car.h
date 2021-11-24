#pragma once

#include <string>
#include <iostream>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel);
	~Car();
	
	void SetPetrol(float newPetrolLevel);
	float GetPetrol();
	std::string GetMake();
	std::string GetModel();
	int GetMilage();
	void Print();
	void Drive(int numMiles);

private:
	std::string make;
	std::string model;
	int doorNumb;
	int milage;
	int milesPerGallon;
	float petrolLevel;
	float petrolLimit;

};	