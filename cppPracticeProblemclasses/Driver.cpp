#include "Driver.h"
#include "Car.h"

Driver::Driver()
	: assginedCar(nullptr)
{
}

Driver::~Driver()
{
}

void Driver::Drive(int numMiles)
{
	assginedCar->Drive(numMiles);
}

void Driver::assignCar(Car* newAssginedCar)
{
	assginedCar = newAssginedCar;
}

int Driver::getmilage()
{

	return assginedCar->GetMilage();
}

float Driver::getpetrol()
{
	return assginedCar->GetPetrol();
}

void Driver::setpetrol(float newPetrolLevel)
{
	assginedCar->SetPetrol(newPetrolLevel);
}

void Driver::print()
{
	assginedCar->Print();
}

