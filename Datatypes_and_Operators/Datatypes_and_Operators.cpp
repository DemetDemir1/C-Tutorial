/*
 * Datatypes_and_Operators.cpp
 *
 *  Created on: 24.02.2018
 *      Author: Demet
 */

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	//Integer Datatype
	//create an integer variable
	int integerVariable;
	//initialize variable with numeric value
	integerVariable = 3;
	//print out the value of the variable
	cout << "Value of IntegerVariable: " << integerVariable << endl;
	cout << "Range of Int: " << std::numeric_limits<int>::max() << endl;
	cout << "Size  of Int : " << sizeof(int) << endl << endl;

	//Long int
	long int longIntVariable = 43466636;
	cout << "Value of longIntVariable: " << longIntVariable << endl;
	cout << "Range of longInt: " << std::numeric_limits<long int>::max() << endl;
	cout << "Size  of longInt : " << sizeof(long int) << endl << endl;

	//short int
	short int shortIntVariable = 2;
	cout << "Value of shortIntVariable: " << longIntVariable << endl;
	cout << "Range of shortInt: " << std::numeric_limits<short int>::max() << endl;
	cout << "Size  of shortInt : " << sizeof(short int) << endl << endl;

	//Unsigned Integer
	unsigned int unsignedIntegerVariable = 345353;
	cout << "Value of unsigned Int: " << unsignedIntegerVariable << endl;
	cout << "Range of unsigned Int: " << std::numeric_limits<unsigned int>::max() << endl;
	cout << "Size  of unsigned Int : " << sizeof(unsigned int) << endl <<endl;

	//Signed Integer
	signed int signedIntegerVariable = -1;
	cout << "Value of signed Int: " << signedIntegerVariable << endl;
	cout << "Range of signed Int: " << std::numeric_limits<signed int>::max() << endl;
	cout << "Size  of signed Int : " << sizeof(signed int) << endl << endl;

	//Float
	float floatVariable = 1.0;
	cout << "Value of float: " << floatVariable << endl;
	cout << "Range of float: " << std::numeric_limits<float>::max() << endl;
	cout << "Size  of float : " << sizeof(float) << endl << endl;

	//Double
	double doubleVariable = 32425235.34324;
	cout << "Value of double: " << doubleVariable << endl;
	cout << "Range of double: " << std::numeric_limits<double>::max() << endl;
	cout << "Size  of double : " << sizeof(double) << endl << endl;

	//Character Datatypes
	//create an char variable to store a character and initialize it
	char characterVariable = 'C';
	//print
	cout << "Value of CharacterVariable: " << characterVariable << endl;
	cout << "Size  of Character : " << sizeof(char) << endl << endl;

	//Wide Characte
	wchar_t wideCharacterVariable = 'A';
	cout << "Value of Wide CharacterVariable: " << wideCharacterVariable << endl;
	cout << "Size  of Wide Character : " << sizeof(wchar_t) << endl << endl;

	//Boolean for binary values
	bool trueOrFalse = true;
	cout << "Value of boolean: " << trueOrFalse << endl;
	cout << "Size  of boolean : " << sizeof(trueOrFalse) << endl << endl;

	//Enumaration
	enum enumType {day, night} enumVariable;
	enumVariable = day;
	cout << "Size  of enumVariable : " << sizeof(enumVariable) << endl << endl;



	return 0;
}
