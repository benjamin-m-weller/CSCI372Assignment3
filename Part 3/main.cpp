#include <iostream>
#include <string>
#include "patientType.h"
#include "doctorType.h"
#include "billType.h"
#include "personType.h"

using namespace std;

int main(int argc, char** argv) 
{
	//Going to create two doctor objects
	doctorType doctor1("Cardiologist", "Michael","Burry");
	doctorType doctor2("Podiatrist", "Michael","Cohen");
	
	
	cout<<"Our second doctor is:"<<endl;
	doctor2.toString();
	
	cout<<"I'm now going to change some things about our doctor2"<<endl;
	
	doctor2.setDoctorSpeciality("Peditirican");
	doctor2.setlastName("Cliff");
	doctor2.setfirstName("Karen");
	
	cout<<"Our doctor2 is now"<<endl;
	doctor2.toString();
	
	//Going to create a patient
	patientType needsHelp(0,12,"5/1/1969", doctor1 ,"01/24/1997", "3/20/2017", "YOLO", "SOLO");
	
	cout<<"Our new patient is"<<endl;
	needsHelp.toString();
	
	cout<<"I'm going to change our patient"<<endl;
	needsHelp.setage(30);
	needsHelp.setattendingPhysician(doctor2);
	needsHelp.setdateInHospital("3/20/2017");
	needsHelp.setdateOfBirth("01/29/1997");
	needsHelp.setdateOutOfHospital("03/29/2017");
	needsHelp.setfirstName("Trace");
	needsHelp.setlastName("Atkins");
	needsHelp.setpatientID(169);
	
	cout<<"Our changed patient is"<<endl;
	needsHelp.toString();
	
	//Going to create a bill and show that it works.
	billType myBill(1, 1738.0, 1337.0, 2121.0);
	cout<<"I've created a bill and here's what it looks like"<<endl;
	myBill.toString();
	
	cout<<"Now I'm going to change everything about it"<<endl;
	myBill.setpatientID(0);
	myBill.setmedicineCharges(0.0);
	myBill.setdoctorCharges(0.0);
	myBill.setroomCharges(0.0);
	
	cout<<"Our changed bill is"<<endl;
	myBill.toString();
	
	
	return 0;
	
}
