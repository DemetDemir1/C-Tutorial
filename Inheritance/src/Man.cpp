/*
 * Man.cpp
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#include "Person.h"
#include "Man.h"

Man::Man(void)
{
	;
}

void Man::setIsAMale(string mal)
{
	isAMale = mal;
}
string Man::getIsMale(void)
{
	return isAMale;
}
