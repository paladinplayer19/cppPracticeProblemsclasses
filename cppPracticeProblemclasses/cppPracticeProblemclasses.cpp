#include <iostream>
#include "Car.h"
#include "Driver.h"



int main()
{
	std::string input;

	std::cout << "Hello, welcome to the car sales department which car model do you wish to know the information on?" << std::endl << "\nPlease identify which car by typing in the following makes: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	    Driver driver;
		Car Ford("Ford", "Puma");
		Car Volkswagen("Volkswagen", "Polo");
		Car Toyota("Toyota", "Yaris");
		Car tempCar("Temp", "Temp");

		driver.assginedCar = &tempCar;
		

	if (input == "Ford" || input == "ford")
	{
		driver.assginedCar = &Ford;
	}
	else if (input == "Volkswagen" || input == "volkswagen")
	{
		driver.assginedCar = &Volkswagen;
	}
	else if(input == "Toyota" || input == "toyota")
	{
		driver.assginedCar = &Toyota;
	}

	

	driver.assginedCar->Print();

	std::cout << "\nYour car currently has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol." << std::endl;
	driver.Drive(15);	
	std::cout << "Your car has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol left, after the driver used the car." << std::endl;

	

	driver.assginedCar->Print();

	std::cout << "\nYour car currently has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol." << std::endl;
	driver.Drive(10);
	std::cout << "Your car has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol left, after the driver used the car." << std::endl;


	std::cout << "Hello again, which of the following would you wish to also drive: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	if (input == "Ford" || input == "ford")
	{
		driver.assginedCar = &Ford;
	}
	else if (input == "Volkswagen" || input == "volkswagen")
	{
		driver.assginedCar = &Volkswagen;
	}
	else if (input == "Toyota" || input == "toyota")
	{
		driver.assginedCar = &Toyota;
	}
	std::cout << "\nYour car currently has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol." << std::endl;
	driver.Drive(5);
	std::cout << "Your car has " << driver.assginedCar->milage << " milage and " << driver.assginedCar->petrolLevel << " Petrol left, after the driver used the car." << std::endl;

	driver.assginedCar->Print();
}
