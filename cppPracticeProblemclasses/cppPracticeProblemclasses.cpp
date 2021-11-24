#include <iostream>
#include "Car.h"
#include "Driver.h"
#include "Garage.h"


int main()
{
	
	std::string input;

	std::cout << "Hello, welcome to the car sales department which car model do you wish to know the information on?" << std::endl << "\nPlease identify which car by typing in the following makes: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	    Driver driver;
		Garage garage;

		Car Ford("Ford", "Puma");
		Car Volkswagen("Volkswagen", "Polo");
		Car Toyota("Toyota", "Yaris");
		Car tempCar("Temp", "Temp");
		

		driver.assignCar(&tempCar);
		

	if (input == "Ford" || input == "ford")
	{
		driver.assignCar(&Ford);
		garage.Park(&Ford);
	}
	else if (input == "Volkswagen" || input == "volkswagen")
	{
		driver.assignCar(&Volkswagen);
		garage.Park(&Volkswagen);
	}
	else if(input == "Toyota" || input == "toyota")
	{
		driver.assignCar(&Toyota);
		garage.Park(&Toyota);
	}


	
	

	std::cout << "\nYour car currently has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol." << std::endl;
	driver.Drive(15);	
	std::cout << "Your car has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol left, after the driver used the car." << std::endl;

	

	

	std::cout << "\nYour car currently has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol." << std::endl;
	driver.Drive(10);
	std::cout << "Your car has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol left, after the driver used the car." << std::endl;


	driver.print();

	std::cout << "Hello again, which of the following would you wish to also drive: Ford, Volkswagen or Toyota." << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	if (input == "Ford" || input == "ford")
	{
		driver.assignCar(&Ford);
		garage.Park(&Ford);
	}
	else if (input == "Volkswagen" || input == "volkswagen")
	{
		driver.assignCar(&Volkswagen);
		garage.Park(&Volkswagen);
	}
	else if (input == "Toyota" || input == "toyota")
	{
		driver.assignCar(&Toyota);
		garage.Park(&Toyota);
	}
	std::cout << "\nYour car currently has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol." << std::endl;
	driver.Drive(5);
	std::cout << "Your car has " << driver.getmilage() << " milage and " << driver.getpetrol() << " Petrol left, after the driver used the car." << std::endl;



	driver.print();
	

	garage.Print();

	garage.Exit();

	garage.Print();

	driver.setpetrol(110);

	std::cout << "your petrol level is: " << driver.getpetrol() << std::endl;
	
}
