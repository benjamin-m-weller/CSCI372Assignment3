#include <iostream>
#include <string>
/*
#include <invalidMonth>
#include <invalidDay>
*/

using namespace std;

class invalidDay : public exception 
{
   const char *what () const throw () 
   {
      return "You've entered an invalid day.";
   }
};


class invalidMonth : public exception {
	
   const char * what () const throw () 
   {
      return "You've entered an invalid month.'";
   }
};

/*
int static input(int valueToBeCleansed)
{
	string myString=string::to_string(valueToBeCleansed);
	
	//Remove the hyphen
	int position=myString.find("-");
	string valueOnly=myString.substr(0,pos);
	
	return (stoi(valueOnly));
} */

bool static validDay(int day, int month, int year, string &putMonthNameHere)
{
	bool valid=true;
	
	switch(month)
	{
		case 1:
			valid=day<=31;
			putMonthNameHere="January";
			break;
		case 2:
			putMonthNameHere="February";
			if (year%4==0)
			{
				valid=day<=29;
			}
			else if (year%4!=0)
			{
				valid=day<=28;
			}
			break;
		case 3:
			putMonthNameHere="March";
			valid=day<=31;
			break;
		case 4:
			putMonthNameHere="April";
			valid=day<=30;
			break;
		case 5:
			putMonthNameHere="May";
			valid=day<=31;
			break;
		case 6:
			putMonthNameHere="June";
			valid=day<=30;
			break;
		case 7:
			putMonthNameHere="July";
			valid=day<=31;
			break;
		case 8:
			putMonthNameHere="August";
			valid=day<=30;
			break;
		case 9:
			putMonthNameHere="September";
			valid=day<=31;
			break;
		case 10:
			putMonthNameHere="October";
			valid=day<=30;
			break;
		case 11:
			putMonthNameHere="November";
			valid=day<=31;
			break;
		case 12:
			putMonthNameHere="December";
			valid=day<=30;
			break;
	}
	
}

void static checkForValidity(int day, int month, int year, string putMonthNameHere)
{
	invalidMonth monthException;
	invalidDay dayException;
	
	if (month>12 ||month<0) 
	{
		throw monthException;
	}
	
	if (!validDay(day, month, year, putMonthNameHere))
	{
		throw dayException;
	}
}

int main(int argc, char** argv) 
{
	int day, month, year;
	cout<<"Please enter your date of birth in the mm-dd-yyyy format: "<<endl;
	cout<<"Month: "<<endl;
	cin>>month;
	cout<<"Day: "<<endl;
	cin>>day;
	cout<<"Year: "<<endl;
	cin>>year;
	
	
	//Declared to be used in the checking for validity process
	string myInputMonthName;
	
	try
	{
		checkForValidity(day, month, year, myInputMonthName);	
	}
	catch (exception &e)
	{
		cout<<e.what()<<endl;
		return 0;
	}
	
	//If they have gotten to this point they had sucessfully passed the trials
	cout<<"You were born on: "<<myInputMonthName<<" "<<day<<", "<<year<<endl;
	return 0;
}
