//============================================================================
// Name        : Vectors.cpp
// Author      : Demet Demir
// Version     :
// Copyright   : 
// Description : Vectors in C++, Ansi-style
//============================================================================

#include <iostream>
//needed to use the vector library
#include <vector>
using namespace std;


//Vectors are Arrays that can change in size
int main() {


	//if you define an array, you have to specify it's size
	int array1[5] = {};
	//now you have an array with 5 'slots' to store values
	//But vectors are Arrays that can change in size. For example:
	std::vector<int> myList;
	std::vector<int>::iterator it;

	myList.begin();
	myList.assign(5, 0);



	for(it=myList.begin(); it<myList.end(); it++)
	{
		cout << "Values of Vector : " << *it << endl;
	}


	it=myList.begin();

	for(it=myList.begin(); it<myList.end(); it++)
	{
		myList.insert(it, 1, 10);
		cout <<"Values of the vector : "<< *it << endl;
	}





	return 0;
}
