#include <iostream>
#include "personType.h"
#include <string>

using namespace std;

void personType::setfirstName(string firstName)
{
this->firstName=firstName;
}

string personType::getfirstName()
{
return firstName;
}

void personType::setlastName(string lastName)
{
this->lastName=lastName;
}

string personType::getlastName()
{
return lastName;
}

personType::personType()
{
	//Null
}

personType::personType(string firstName, string lastName)
{
	this->firstName=firstName;
	this->lastName=lastName;
}




