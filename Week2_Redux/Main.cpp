#include "Vehicle.h"
#include "Car.h"
#include <iostream>


int main() {

	Vehicle testa;
	Car cara;

	testa.Drive();
	std::cout << testa.getYear() << std::endl;

	cara.Drive();
	std::cout << cara.getYear() << std::endl;



}