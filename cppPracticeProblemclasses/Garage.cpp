#include "Garage.h"
#include "Car.h"

#include <iostream>

Garage::Garage()
	:contents()
{
}

Garage::~Garage()
{
}

void Garage::Print()
{
	std::cout << "\nThe following car's makes are:" << std::endl;

	for (int i = 0; i < contents.size(); ++ i)
	{
		std::cout << contents[i]->GetMake() << std::endl;
	}

	std::cout << "\nThe following car's models are:" << std::endl;

	for (int i = 0; i < contents.size(); ++i)
	{
		std::cout << contents[i]->GetModel() << std::endl;
	}
}

void Garage::Park(Car* car)
{
	contents.push_back(car);
}

void Garage::Exit()
{
	contents.pop_back();
}
