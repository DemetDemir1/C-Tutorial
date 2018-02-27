//============================================================================
// Name        : Classes.cpp
// Author      : Demet Demir
// Description : Classes in C++, Ansi-style
//============================================================================

#include "Classes.h"

int main() {

Car newCar;
newCar.setColor("blue");
newCar.setEngine("Engine-364");
newCar.setFuel(30.0);
newCar.setStatus("on");

	if(newCar.getStatus() == "on")
	{
		cout <<"The color of your car is  : " << newCar.getColor() << endl;
		cout <<"The engine of your car is : " << newCar.getEngine() << endl;
		cout <<"The fuel of your car is   : "  <<newCar.getFuel() << endl;
	}
	return 0;
}



