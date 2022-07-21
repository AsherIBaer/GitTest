#include "Vehicle.h"
#include <iostream>

void Vehicle::Drive() {

	std::cout << "No driver here" << std::endl;
	this->year = 3;


};

int Vehicle::getYear() {
	return this->year;
}