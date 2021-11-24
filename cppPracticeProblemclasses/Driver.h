#pragma once

class Car;
class Driver
{

public:

	Driver();
	~Driver();

	void Drive(int numMiles);
	void assignCar(Car* newAssginedCar);
	int getmilage();
	float getpetrol();
	void setpetrol(float newPetrolLevel);
	void print();

private:
	Car* assginedCar;
	
};

