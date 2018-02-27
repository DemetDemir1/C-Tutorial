/*
 * Man.h
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#ifndef MAN_H_
#define MAN_H_
#include "Person.h"

class Man : public Person
{
private:
	string isAMale;
public:
	Man();
	void setIsAMale(string mal);
	string getIsMale(void);
};


#endif /* MAN_H_ */
