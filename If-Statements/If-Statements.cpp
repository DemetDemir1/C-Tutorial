/*
 * If-Statements.cpp
 *
 *  Created on: 24.02.2018
 *      Author: Demet
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int variable1;
	int variable2;
	bool bool1 = true;
	bool bool2 = false;
	char char1;

	cout << "Please enter value for variable1: " << endl;
	//with "cin >>" you can enter a value for a variable in this scenario variable1
	cin >> variable1;
	cout << "Please enter value for variable2: " << endl;
	cin >> variable2;

	//Number Comparison: is variable1 equal to variable2?
	//in the if-part you define the statement and in curly brackets
	//you define what should happen if the statement is true
	//and if it is true, print a message to the user
	if(variable1 == variable2)
	{
		cout << "variable1 == variable2" << endl;
	}
	//in the else-part you can define what should happen if the statement before
	//isn't true. Here we print a message to the user that the value of the
	//variables isn't equal
	else
	{
		cout << "variable1 is not equal to variable2" << endl;
	}

	//Check if true and print the result
	if(bool1 && bool2)
	{
		cout << "The if-statement is true" << endl;
	}
	else
	{
		cout <<"The if-statement is false" << endl;
	}

	//Check if one of the values are true
	if(bool1 || bool2)
	{
		cout << "The if-statement is true" << endl;
	}
	else
	{
		cout <<"The if-statement is false" << endl;
	}

	//Check if bool1 is not equal to bool2
	if(bool1 !=bool2)
	{
		cout << "The if-statement is false" << endl;
	}
	else
	{
		cout <<"The if-statement is true" << endl;
	}

	//Check if character is Uppercase
	cout << "Enter a character : " << endl;
	cin >> char1;

	if((char1 >= 'A') && (char1 <= 'Z'))
	{
		bool1 = true;
	}
	else
	{
		bool1 = false;
	}
	cout << bool1 << endl;

	//short version without else
	if(bool1++ || bool2++ ) variable1++;
	cout << variable1;

	return 0;

}


