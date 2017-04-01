#ifndef patientType_H
#define patientType_H

#include "doctorType.h"
#include <string>

class patientType : public personType
{
public:
	
void setpatientID(int patientID);

int getpatientID();

void setage(int age);

int getage();

void setdateOfBirth(string dateOfBirth);

string getdateOfBirth();

void setattendingPhysician(doctorType attendingPhysician);

doctorType getattendingPhysician();

void setdateInHospital(string dateInHospital);

string getdateInHospital();

void setdateOutOfHospital(string dateOutOfHospital);

string getdateOutOfHospital();

void toString();



patientType(int id, int age, string dateOfBirth, doctorType doctor, string dateIn, string dateOut, string first, string last);
	
patientType();


private:
	int patientID;
	int age;
	string dateOfBirth;
	doctorType attendingPhysician;
	string dateInHospital;
	string dateOutOfHospital;
};

#endif
