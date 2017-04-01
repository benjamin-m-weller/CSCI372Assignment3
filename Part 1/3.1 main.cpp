#include <iostream>
#include <fstream> 
#include <iomanip>
#include <string>

using namespace std;

//Here is my struct
struct Student
{
    string studentFirstName;
    string studentLastName;
    int testScore;
    char grade;
};

//Method returns the highest test score in the array of structs
void getHighestTestScore(Student myArray[], int lengthOfArray, ofstream &outfile)
{
	int max=0;
	int newScore=0;
	string studentFirstName;
    string studentLastName;
	char highestGrade;
	
	for (int i=0; i<lengthOfArray; i++)
	{
		newScore=myArray[i].testScore;		
		if (newScore>max)
		{
			max=myArray[i].testScore;
			studentFirstName=myArray[i].studentFirstName;
			studentLastName=myArray[i].studentLastName;
			highestGrade=myArray[i].grade;
		}
	}
	//Going to print the highest score to the output file.
	outfile<< "Highest Scoring Individual: "<< studentLastName << ", " << studentFirstName << " (" << max << ", " << highestGrade << ") "<< endl;
}

void printMyStruct(Student myStudent, ofstream &outfile)
{
	outfile<<myStudent.studentLastName<<", "<<myStudent.studentFirstName
	<<myStudent.grade<<", "<<myStudent.testScore<<endl;
}

//Prints out the names of the highest scoring individuals
// void printHighestTestScore(int highestScore, Student myArray[], int lengthOfArray, ofstream &outFile)
// {
	// int newScore=0;
	// outFile<<"\nHere are the highest scoring studnet(s).\n"<<endl;
	// for (int i=0; i<lengthOfArray; i++)
	// {
		// newScore=myArray[i].testScore;
		// if (newScore==max)
		// {
			// printMyStruct(myArray[i], outFile);
		// }
	// }	
// }

char getGradeForStudent(int score)
{
	char returnMe;
	
		if (score>=90) //Wondering if this is how we do a comparison???
				{
					returnMe='A';
				}
				
		else if (score>=80)
				{
returnMe='B';
}
				
	else if (score>=70)
				{
returnMe='C';
}
				
	 else if (score>=60)
				{
returnMe='D';
}
				
	 else if (score<60)
				{
returnMe='F';
}
				
	
	return returnMe;
}

void getInput(Student myArray[], int lengthOfArray, ifstream &inFile)
{
	//Should do a get line for each element in the array
	inFile.open("trialInput.txt");
	
	for (int i=0; i<lengthOfArray; i++)
	{
		inFile>>myArray[i].studentLastName;
		inFile>>myArray[i].studentFirstName;
		inFile>>myArray[i].testScore;
	
		//Now get the letter grade
		myArray[i].grade=getGradeForStudent(myArray[i].testScore);
	}
}

void printStandardOutput(Student myArray[], int lengthOfArray, ofstream &outFile)
{
	for (int i=0; i<lengthOfArray; i++)
	{
		printMyStruct(myArray[i], outFile);	
	}
}

int main(int argc, char** argv) 
{
	//Input and output
	ifstream inFile;
	ofstream outFile;
	
	Student myArrayPointer[20]; //Getting 20 students
	
	getInput(myArrayPointer, 20, inFile);
	outFile.open("output.txt");
	getHighestTestScore(myArrayPointer, 20, outFile);
	printStandardOutput(myArrayPointer, 20, outFile);
	outFile.close();
}
