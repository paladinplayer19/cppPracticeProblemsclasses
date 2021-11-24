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
