#include <iostream>
#include "billType.h"

using namespace std;

void billType::setpatientID(int patientID)
{
this->patientID=patientID;
}

int billType::getpatientID()
{
return this->patientID;
}

void billType::setmedicineCharges(double medicineCharges)
{
this->medicineCharges=medicineCharges;
}

double billType::getmedicineCharges()
{
return this->medicineCharges;
}

void billType::setdoctorCharges(double doctorCharges)
{
this->doctorCharges=doctorCharges;
}

double billType::getdoctorCharges()
{
return this->doctorCharges;
}

void billType::setroomCharges(double roomCharges)
{
this->roomCharges=roomCharges;
}

double billType::getroomCharges()
{
return this->roomCharges;
}

billType::billType(int patientID, double medicineCharges, double doctorCharges, double roomCharges)
{
	this->patientID = patientID;
	this->medicineCharges = medicineCharges;
	this->doctorCharges = doctorCharges;
	this->roomCharges = roomCharges;
}

billType::billType()
{
	//Nothing
}

void billType::toString()
{
	cout<<"The patient ID on the bill is "<<getpatientID()<<"\n"
	<<"The the medicine charges on the bill are "<<getpatientID()<<"\n"
	<<"The the doctor charges on the bill are "<<getpatientID()<<"\n"
	<<"The the room charges on the bill are "<<getpatientID()<<"\n"
	<<endl;
	
}
