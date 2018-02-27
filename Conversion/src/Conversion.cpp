//============================================================================
// Name        : Conversion.cpp
// Author      : Demet Demir
// Description : Conversion in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//you can change the type of a variable in two ways
	//implicit and explicit
	//the implicit way to do this:
	double doubleVariable = 4.67;
	int integerVariable;
	integerVariable = int(doubleVariable);
	//prints out 4
	cout << integerVariable << endl;

	//explicit cast
	int a = 3, b = 4;
	float x = a/b;

	//static cast
	float x = static_cast<float>(a)/b;

	//const_cast
	float x = const_cast<float>(a)/b;

	//reinterpret_cast
	float x = reinterpret_cast<float>(a)/b;


	return 0;
}
