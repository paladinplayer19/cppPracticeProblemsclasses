#pragma once
#include <vector>

class Car;
class Garage
{
public:

	Garage();
	~Garage();

	void Print();
	void Park(Car* car);
	void Exit();

private:
	std::vector<Car*> contents;
};

