/*
 * Classes.h
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
	string color;
	double fuel;
	string engine;
	string status;
public:
	Car(void);
	void setColor(string color);
	string getColor(void);
	void setFuel(double fuel);
	double getFuel(void);
	void setEngine(string engine);
	string getEngine(void);
	void setStatus(string status);
	string getStatus(void);

};


