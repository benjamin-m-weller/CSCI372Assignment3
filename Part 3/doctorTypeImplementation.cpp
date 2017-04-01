#include <iostream>
#include "doctorType.h"
#include "personType.h"
#include <string>

using namespace std;

void doctorType::setDoctorSpeciality(string speciality)
{
this->speciality=speciality;
}

string doctorType::getDoctorSpeciality()
{
return speciality;
}

doctorType::doctorType(string speciality, string first, string last)
	: personType(first, last)
{
	this->speciality=speciality;
}

doctorType::doctorType()
{
	
}

void doctorType::toString()
{
	cout<<"The doctor's name is "<<personType::getfirstName()<<" "<<personType::getlastName()<<"\n"
	<<"The doctor's speciality is "<<getDoctorSpeciality()<<endl;
	
}

