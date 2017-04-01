#ifndef billType_H
#define billType_H

class billType
{
	
public:

void setpatientID(int patientID);


int getpatientID();


void setmedicineCharges(double medicineCharges);


double getmedicineCharges();


void setdoctorCharges(double doctorCharges);


double getdoctorCharges();


void setroomCharges(double roomCharges);


double getroomCharges();

void toString();

billType(int patientID, double medicineCharges, double doctorCharges, double roomCharges);

billType();



private:
	int patientID;
	double medicineCharges;
	double doctorCharges;
	double roomCharges;
};

#endif
