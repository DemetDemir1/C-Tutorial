/*
 * Operators.cpp
 *
 *  Created on: 24.02.2018
 *      Author: Demet
 */

//============================================================================
// Name        : Operators.cpp
// Author      : Demet Demir
// Description : C++ Operators, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	//Arithmetic Operators
	//Basic assignment with "="
	int a = 3;
	int b = 4;
	int result = 0;

	//Addition
	result = a + b;
	cout <<"Result of a + b      = " << result << endl;

	//Unary Plus
	result = 0;
	result += a;
	cout <<"Result of result + a = " << result << endl;

	//Substraction
	result = a - b;
	cout <<"Result of a - b      = " << result << endl;

	//Unary Minus
	result = 0;
	result -= a;
	cout <<"Result of result - a = " << result << endl;

	//Multiplication
	result = a * b;
	cout <<"Result of a * b      = " << result << endl;

	//Division
	result = a / b;
	cout <<"Result of a / b      = " << result << endl;

	//Modulo Division
	result = a % b;
	cout <<"Result of a % b      = " << result << endl;

	//Increment
	result = 0;
	result = a++;
	cout <<"Result of a++        = " << result << endl;

	//Decrement
	result = 0;
	result = a--;
	cout <<"Result of a--        = " << result << endl <<endl;

	//Comparison and relational Operators
	char tmp1 = 'C';
	char tmp2 = 'B';
	char tmp3 = 'C';
	bool comparisonResult;

	//Equal to
	comparisonResult = tmp1 == tmp2;
	cout << "Result of comparison tmp1 == tmp2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = tmp1 == tmp3;
	cout << "Result of comparison tmp1 == tmp3 = " << comparisonResult <<" Zero for false, One for true" << endl;

	//Not equal to
	comparisonResult = tmp1 != tmp2;
	cout << "Result of comparison tmp1 != tmp2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = tmp1 != tmp3;
	cout << "Result of comparison tmp1 != tmp3 = " << comparisonResult <<" Zero for false, One for true" << endl;

	int var1 = 5;
	int var2 = 3;
	int var3 = 6;

	//Greater than
	comparisonResult = var1 > var2;
	cout << "Result of comparison var1 and var2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = var1 > var3;
	cout << "Result of comparison var1 and var3 = " << comparisonResult <<" Zero for false, One for true" << endl;

	//Less than
	comparisonResult = var1 < var2;
	cout << "Result of comparison var1 and var2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = var1 < var3;
	cout << "Result of comparison var1 and var3 = " << comparisonResult <<" Zero for false, One for true" << endl;

	//Greater than or equal to
	comparisonResult = var1 >= var2;
	cout << "Result of comparison var1 and var2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = var1 >= var3;
	cout << "Result of comparison var1 and var3 = " << comparisonResult <<" Zero for false, One for true" << endl;


	//Less than or equal to
	comparisonResult = var1 <= var2;
	cout << "Result of comparison var1 and var2 = " << comparisonResult << " Zero for false, One for true" << endl;
	comparisonResult = var1 <= var3;
	cout << "Result of comparison var1 and var3 = " << comparisonResult <<" Zero for false, One for true" << endl <<endl;


	//Logical operators
	bool bool1 = true;
	bool bool2 = false;
	bool bool3 = true;
	bool bool4 = false;

	//And
	comparisonResult = bool1 && bool2;
	cout << "Result of bool1 && bool2 = " << comparisonResult << endl;
	comparisonResult = bool1 && bool3;
	cout << "Result of bool1 && bool3 = " << comparisonResult << endl;
	comparisonResult = bool2 && bool4;
	cout << "Result of bool2 && bool4 = " << comparisonResult << endl;
	cout << "true and true = true/1 - true and false = false/0 - false and false = false/0" << endl << endl;

	//Or
	comparisonResult = bool1 || bool2;
	cout << "Result of bool1 || bool2 = " << comparisonResult << endl;
	comparisonResult = bool1 || bool3;
	cout << "Result of bool1 || bool3 = " << comparisonResult << endl;
	comparisonResult = bool2 || bool4;
	cout << "Result of bool2 || bool4 = " << comparisonResult << endl;
	cout << "true or true = true/1 - true or false = true/1 - false or false = false/0" << endl << endl;

	//Logical Negation
	comparisonResult = bool1 && !bool2;
	cout << "Result of bool1 && !bool2 = " << comparisonResult << endl;
	comparisonResult = bool1 || !bool3;
	cout << "Result of bool1 || !bool3 = " << comparisonResult << endl;
	comparisonResult = bool2 || !bool4;
	cout << "Result of bool2 || !bool4 = " << comparisonResult << endl;

	return 0;

}


