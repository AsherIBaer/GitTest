#include <iostream>
#include <string>
#include "Header.h"



bool Leap(int year);

bool Leap(int year) {
	

	if (year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else {
		return false;
	}

}


void ChallengeW2D3_2();
void ChallengeW2D3_2() {

	int in;
	std::cout << "enter something, IF THEE DARE" << std::endl;
	std::cin >> in;

	for (int i = 1; i <= in; i++) {

		if (in % i == 0) {

			std::cout << i << std::endl;
			std::cout << "for-if you love me!" << std:: endl;
		}
	}




}
