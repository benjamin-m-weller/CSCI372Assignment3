#ifndef personType_H
#define personType_H

#include <string>

using namespace std;

class personType
{
public:

void setfirstName(string firstName);

string getfirstName();

void setlastName(string lastName);

string getlastName();

personType();

personType(string firstName, string lastName);


private:

string firstName;
string lastName;
};
#endif
