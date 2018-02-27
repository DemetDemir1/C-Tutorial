/*
 * Person.cpp
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#include "Person.h"

Person::Person()
{
	;
}
void Person::setName(string nam)
{
	name = nam;
}

string Person::getName(void)
{
	return name;
}

void Person::setAge(unsigned int ag)
{
	age = ag;
}

unsigned int Person::getAge(void)
{
	return age;
}

void Person::setWeight(double weig)
{
	weight = weig;
}
double Person::getWeight(void)
{
	return weight;
}
void Person::setBirthday(string birth)
{
	birthday = birth;
}
string Person::getBirthday(void)
{
	return birthday;
}
