//============================================================================
// Name        : Pointer.cpp
// Author      : Demet Demir
// Description : Pointers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//with pointers you can store the physical address of a variable
	//for example, this can be used to index variables
	int variable1;
	//create integer pointer
	int *memoryAdress;
	variable1 = 454;
	memoryAdress = &variable1;
	cout <<"The Adress of variable1 is : " << memoryAdress << endl;
	cout <<"The Value of variable1 is : " << *memoryAdress << endl;

	//Array of Pointers
	int arrayOfPointers[5] = {1,2,3,4,5};
	int *pointer1;
	pointer1 = arrayOfPointers;

	//iterate through array with pointers
	for(int i=0; i < 5; i++)
	{
	cout <<"The adresses of the array values : " << &pointer1[i] << endl;
	cout <<"The values of the array : " << pointer1[i] << endl;
	}


	return 0;
}
