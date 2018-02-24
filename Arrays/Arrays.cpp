/*
 * Arrays.cpp
 *
 *  Created on: 24.02.2018
 *      Author: Demet
 */

#include <iostream>

using namespace std;

int main()
{
	//if you want to store more than one value, you can use arrays
	//arrays have a type like integer, character, float etc.
	//a name, in this example "foo" and the number of elements which should
	//be created and a list of values
	int foo[6] = {34, 56, 12, 4, 88, 23};

	cout << "Elements of Array foo" << endl;
	//to print the elements of an array, you can use a for loop for example
	//the iterator i is used to index the element of the array
	for(int i = 0; i < 6; i++)
	{
		cout << foo[i] << endl;
	}

	cout << "Elements of Array bar" << endl;
	//if you don't know the values you want to store for now, you can
	//partially or fully let the list of values empty. The empty places are initialized
	//with 0
	int bar[4] = {45, 78};

	for(int i=0; i < 4; i++)
	{
		cout << bar[i] <<endl;
	}

	cout << "Elements of Array baz" << endl;
	int baz[4] = {};

	for(int i = 0; i < 4; i++)
	{
		cout << baz[i] << endl;
	}

	//character array to store a word. You also can use String, but for now,
	//we use characters
	char charArray[5] = {'H', 'e', 'l', 'l', 'o'};

	for(int i = 0; i < 5; i++)
	{
		cout << charArray[i];
	}
	return 0;

}


