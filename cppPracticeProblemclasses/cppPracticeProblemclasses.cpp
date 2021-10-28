#include <iostream>
#include "Car.h"
#include <iostream>

int main()
{
	Car myCar;


	std::cout << "Hello, welcome to the car sales department which car model do you wish to know the information on?" << std::endl << "\nPlease identify which car by typing in the following makes: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> myCar.make;
	std::cout << std::endl;


	if (myCar.make == "Ford" || myCar.make == "ford") {

		myCar.model = "Puma";
		myCar.doorNumb = 4;
		myCar.milesPerGallon = 70;
		myCar.petrolLevel = 100;
	}
	else if (myCar.make == "Volkswagen" || myCar.make == "volkswagen")
	{

		myCar.model = "Polo";
		myCar.doorNumb = 3;
		myCar.milesPerGallon = 80;
	}
	else if (myCar.make == "Toyota" || myCar.make == "toyota") {

		myCar.model = "Yaris";
		myCar.doorNumb = 5;
		myCar.milesPerGallon = 60;
	}
	else
	{
		myCar.make = "Generic";
		myCar.model = "plain";
		myCar.doorNumb = 4;
		myCar.milesPerGallon = 55;
	}

	myCar.Print();

	std::cout << "\nYour car currently has " << myCar.milage << " milage and " << myCar.petrolLevel << " Petrol." << std::endl;
	myCar.Drive();
	std::cout << "Your car has " << myCar.milage << " milage and " << myCar.petrolLevel << " Petrol left, after the drive." << std::endl;

}