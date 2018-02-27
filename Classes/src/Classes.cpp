//============================================================================
// Name        : Classes.cpp
// Author      : Demet Demir
// Description : Classes in C++, Ansi-style
//============================================================================


#include "Classes.h"

Car::Car(void)
{
	cout << "Your car is created with the following stats : " << endl;
}
void Car::Car::setColor(string col)
{
	color = col;
}

string Car::Car::getColor(void)
{
	return color;
}

void Car::Car::setFuel(double fu)
{
	fuel = fu;
}

double Car::Car::getFuel(void)
{
	return fuel;
}

void Car::Car::setEngine(string eng)
{
	engine = eng;
}

string Car::Car::getEngine(void)
{
	return engine;
}

void Car::Car::setStatus(string stat)
{
	status = stat;
}

string Car::Car::getStatus(void)
{
	return status;
}
