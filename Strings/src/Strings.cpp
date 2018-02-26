//============================================================================
// Name        : Strings.cpp
// Author      : Demet Demir
// Description : Strings in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	//character Array
	char charArray[10] = {'H', 'e', 'l', 'l', 'o'};

	//string
	string myString = "Hello";
	cout << "Value of myString : " << myString << endl;

	//concatanate with + sign
	myString += " World";
	cout << "New Value of myString : " << myString << endl;

	//get the length of the string with the function length()
	cout << "The length of myString : " << myString.length() << endl;

	//concatanate with the function append()
	string newString = " again";
	myString.append(newString, 0, 6);
	cout <<"The new String is: " << myString << endl;

	//another way to assign a string to a variable is by using assign() function
	newString.assign(newString, 1, 2);
	cout << newString << endl;

	//prints ten times '*'
	newString.assign(10, '*');
	cout << newString << endl;

	//iterate through a string
	newString = "String";

	for(int i=0; i != newString.length(); i++)
	{
		cout << newString.at(i);
	}

	//insert something at the end of a string
	newString.back() = '!';
	cout << newString << endl;

	newString = "String";

	for(std::string::iterator it = newString.begin(); it != newString.end(); ++it)
	{
		cout << *it << endl;
	}

	newString.clear();
	cout << newString << endl;
	newString = "Test";

	//String compare
	if(myString.compare(newString) == 0)
	{
		cout << "The strings are the same" << endl;
	}
	else
	{
		myString = newString;
		cout << myString << endl;
	}

	//Substring in C++
	newString = "Hello World!";
	newString = newString.substr(6, 5); //World
	cout << newString << endl;

	//find the position of a Word you are searching for
	string findString = "Hello World again";
	std::size_t pos = findString.find("World");
	cout << pos << endl;








	return 0;
}
