//============================================================================
// Name        : Functions.cpp
// Author      : Demet Demir
// Version     :
// Copyright   : 
// Description : Functions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//declaring and defining of a function
int addition(int variable1, int variable2)
{
	int result;
	return result = variable1 + variable2;
}

//declaring and declaring of a function with passing references as arguments
int additionWithReferences(int &variable1, int &variable2)
{
	return variable1 + variable2;
}

//function to set a value to a variable
void setValue()
{
	int a;
	cout << "Please enter a integer value : " << endl;
	cin >> a;
}

//function to get the value of a variable
int getValue(void)
{
	int value = 5;
	return value;
}

//recursive functions are functions which can call functions
//for example: a function that calculates the factorial numbers
long factorial (long a)
{
  if (a > 1)
   return (a * factorial (a-1));
  else
   return 1;
}
int main() {

	int result;
	result = addition(4,6);
	cout <<"Result of the addition function : " << result << endl;

	//same with passing references
	int a = 4, b = 6;
	result = additionWithReferences(a,b);
	cout <<"Result of the addition function : " << result << endl;

	//set the value by cin
	setValue();
	//get the value and store it in result
	result = getValue();
	cout << result << endl;

	//calls the recursive function
	result = factorial(4);
	cout << result << endl;


	return 0;
}
