/*
 * While.cpp
 *
 *  Created on: 24.02.2018
 *      Author: Demet
 */

#include <iostream>
using namespace std;

int main() {

	int i = 10;

	//does a task 10 times
	while(i < 20)
	{
		cout <<"This will be printed 10 times!" << endl;
		i++;
	}

	//infinity loop
	while(true)
	{
		cout <<"This is a infinity loop" << endl;
	}

	//calculate the factorial numbers
	int number, i = 1, factorial = 1;

	    cout << "Enter a positive integer: ";
	    cin >> number;

	    while ( i <= number) {
	        factorial *= i;      //factorial = factorial * i;
	        ++i;
	    }

	    cout<<"Factorial of "<< number <<" = "<< factorial;


	return 0;
}
