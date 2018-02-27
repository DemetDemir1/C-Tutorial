//============================================================================
// Name        : Exception_Handling.cpp
// Author      : Demet Demir
// Description : Exception_Handling in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

//division by zero
double division(int a, int b) {
 if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main() {

	//try and catch block
	try
	{
		throw 30;
	}
	catch (int e)
	{
	    cout << "An exception occurred. Exception Nr. " << e << '\n';
	}

	//call function with exception handling
	double a = 2.34;
	double b = 0;
	try
	{
	division(a, b);
	}
	catch(char msg)
	{
		cout <<"Exception occured";
	}




	return 0;
}
