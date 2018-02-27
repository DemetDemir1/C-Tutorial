/*
 * Person.h
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	unsigned int age;
	double weight;
	string birthday;
public:
	Person();
	void setName(string nam);
	string getName(void);
	void setAge(unsigned int ag);
	unsigned int getAge(void);
	void setWeight( double weig);
	double getWeight(void);
	void setBirthday(string birth);
	string getBirthday(void);
};



#endif /* PERSON_H_ */
