#include <iostream>
#include "Car.h"

int main()
{

	Car myCar;

	myCar.make = "ford";
	myCar.model = "Puma";
	myCar.doorNumb = 4;
	myCar.milage = 60;
	myCar.milesPerGallon = 70;
	myCar.petroLevel = 50;
 
	myCar.Print();
}

