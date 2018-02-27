//============================================================================
// Name        : Inheritance.cpp
// Author      : Demet Demir
// Version     :
// Copyright   : 
// Description : Inheritance in C++, Ansi-style
//============================================================================

#include "Person.h"
#include "Woman.h"
#include "Man.h"

int main() {

	Person person1;
	person1.setName("Henry");
	person1.setBirthday("10.10.2000");
	person1.setWeight(50.4);
	person1.setAge(18);

	cout << person1.getName() << endl;
	cout << person1.getBirthday() << endl;
	cout << person1.getWeight() << endl;
	cout << person1.getAge() << endl;


	Woman woman1;
	woman1.setName("Sarah");
	woman1.setBirthday("14.04.1990");
	woman1.setWeight(45.0);
	woman1.setAge(28);
	woman1.setIsAFemale("is a female");

	cout << woman1.getName() << endl;
	cout << woman1.getBirthday() << endl;
	cout << woman1.getWeight() << endl;
	cout << woman1.getAge() << endl;
	cout << woman1.getIsAFemale() << endl;

	Man man1;
	man1.setName("Joe");
	man1.setIsAMale("is a male");

	cout << man1.getName() << endl;
	cout << man1.getIsMale() << endl;

	return 0;
}
