#pragma once


class Vehicle
{
protected:
	int year;
	int x2;

public:
	 virtual void Drive() = 0 ;

	 int getYear();

};

