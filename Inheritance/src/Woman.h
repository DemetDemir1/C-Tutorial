/*
 * Woman.h
 *
 *  Created on: 27.02.2018
 *      Author: Demet
 */

#ifndef WOMAN_H_
#define WOMAN_H_
#include "Person.h"

class Woman : public Person
{
private:
	string isAFemale;
public:
	void setIsAFemale(string fem);
	string getIsAFemale(void);
};



#endif /* WOMAN_H_ */
