#ifndef doctorType_H
#define doctorType_H

#include <string>
#include "personType.h"

using namespace std;

class doctorType : public personType
{
public:
	string getDoctorSpeciality();
	void setDoctorSpeciality(string s);
	void toString();
	doctorType(string speciality, string first, string last); 
	doctorType();
	
	
private:
	string speciality;
};
#endif
