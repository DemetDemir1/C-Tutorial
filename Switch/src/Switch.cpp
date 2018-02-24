//============================================================================
// Name        : Switch.cpp
// Author      : Demet Demir
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int variable1 = 4;
	char character1 = 'C';

	//If you want to check multiple values, instead of using nested if-else
	//you can use a switch case. It takes the variable to check as an argument
	//and compares it's value to the different cases. If the statement is true
	//print the case value. Break exits the Statement after succeeding
	switch (variable1)
	{
	case 1:
		cout << "Variable = 1\n";
		break;
	case 2:
		cout << "Variable = 2\n";
		break;
	case 3:
		cout << "Variable = 3\n";
		break;
	case 4:
		cout << "Variable = 4\n";
		break;
	default:
		cout << "None of them\n";
		break;
	}

	//Switch case with character
	switch (character1)
	{
	case 'A':
		cout << "Variable = A\n";
		break;
	case 'B':
		cout << "Variable = B\n";
		break;
	case 'C':
		cout << "Variable = C\n";
		break;
	case 'D':
		cout << "Variable = D\n";
		break;
	default:
		cout << "None of them\n";
		break;
	}



	return 0;
}
