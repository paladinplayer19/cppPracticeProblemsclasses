#include <iostream>
#include "Car.h"
#include <iostream>

int main()
{
	Car myCar;


	std::cout << "Hello, welcome to the car sales department which car model do you wish to know the information on?" << std::endl << "\nPlease identify which car by typing in the following makes: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> myCar.make;
	std::cout << std::endl;


	

	myCar.Print();

	std::cout << "\nYour car currently has " << myCar.milage << " milage and " << myCar.petrolLevel << " Petrol." << std::endl;
	myCar.Drive(10);
	std::cout << "Your car has " << myCar.milage << " milage and " << myCar.petrolLevel << " Petrol left, after the drive." << std::endl;

}