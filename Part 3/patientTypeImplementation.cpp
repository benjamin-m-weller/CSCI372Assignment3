#include <iostream>
#include <string>
#include "personType.h"
#include "patientType.h"
#include "doctorType.h" 


using namespace std;

void patientType::setpatientID(int patientID)
{
this->patientID=patientID;
}

int patientType::getpatientID()
{
return patientID;
}

void patientType::setage(int age)
{
this->age=age;
}

int patientType::getage()
{
	return age;
}

void patientType::setdateOfBirth(string dateOfBirth)
{
this->dateOfBirth=dateOfBirth;
}

string patientType::getdateOfBirth()
{
return dateOfBirth;
}

void patientType::setattendingPhysician(doctorType attendingPhysician)
{
this->attendingPhysician=attendingPhysician;
}

doctorType patientType::getattendingPhysician()
{
return attendingPhysician;
}

void patientType::setdateInHospital(string dateInHospital)
{
this->dateInHospital=dateInHospital;
}

string patientType::getdateInHospital()
{
return dateInHospital;
}

void patientType::setdateOutOfHospital(string dateOutOfHospital)
{
this->dateOutOfHospital=dateOutOfHospital;
}

string patientType::getdateOutOfHospital()
{
return dateOutOfHospital;
}

patientType::patientType(int id, int age, string dateOfBirth,
	doctorType doctor, string dateIn, string dateOut, string first, string last)
	:personType(first, last)
	{
		patientID=id;
		this->age=age;
		attendingPhysician=doctor;
		dateInHospital=dateIn;
		dateOutOfHospital=dateOut;
	}
	
patientType::patientType()
{
	//Null
}


void patientType::toString()
{
	
	cout<<"The patient's name is "<<personType::getfirstName()<<" "<<personType::getlastName()<<"\n"
	<<"The patient's ID is "<<getpatientID()<<"\n"
	<<"The patient's date of bith is "<<getdateOfBirth()<<"\n"
	<<"The patient's age is "<<getage()<<"\n"
	<<"The patient's doctor is "<<getattendingPhysician().getfirstName()<<" "<<getattendingPhysician().getlastName()<<"\n"
	<<"The patient entered the hospital on "<<getdateInHospital()<<"\n"
	<<"The patient left the hospital on "<<getdateOutOfHospital()<<"\n"
	<<endl;
}
