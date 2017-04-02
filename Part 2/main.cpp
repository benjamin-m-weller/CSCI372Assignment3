#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct CountsLetters
{
	char character;
	int count;
};

void incrementsCountOfLetter(CountsLetters myArray[], int arrayLength, char myChar)
{
	switch (myChar)
	{
case 'a':
myArray[0].count++;
break;
case 'b':
myArray[1].count++;
break;
case 'c':
myArray[2].count++;
break;
case 'd':
myArray[3].count++;
break;
case 'e':
myArray[4].count++;
break;
case 'f':
myArray[5].count++;
break;
case 'g':
myArray[6].count++;
break;
case 'h':
myArray[7].count++;
break;
case 'i':
myArray[8].count++;
break;
case 'j':
myArray[9].count++;
break;
case 'k':
myArray[10].count++;
break;
case 'l':
myArray[11].count++;
break;
case 'm':
myArray[12].count++;
break;
case 'n':
myArray[13].count++;
break;
case 'o':
myArray[14].count++;
break;
case 'p':
myArray[15].count++;
break;
case 'q':
myArray[16].count++;
break;
case 'r':
myArray[17].count++;
break;
case 's':
myArray[18].count++;
break;
case 't':
myArray[19].count++;
break;
case 'u':
myArray[20].count++;
break;
case 'v':
myArray[21].count++;
break;
case 'w':
myArray[22].count++;
break;
case 'x':
myArray[23].count++;
break;
case 'y':
myArray[24].count++;
break;
case 'z':
myArray[25].count++;
break;
case 'A':
myArray[26].count++;
break;
case 'B':
myArray[27].count++;
break;
case 'C':
myArray[28].count++;
break;
case 'D':
myArray[29].count++;
break;
case 'E':
myArray[30].count++;
break;
case 'F':
myArray[31].count++;
break;
case 'G':
myArray[32].count++;
break;
case 'H':
myArray[33].count++;
break;
case 'I':
myArray[34].count++;
break;
case 'J':
myArray[35].count++;
break;
case 'K':
myArray[36].count++;
break;
case 'L':
myArray[37].count++;
break;
case 'M':
myArray[38].count++;
break;
case 'N':
myArray[39].count++;
break;
case 'O':
myArray[40].count++;
break;
case 'P':
myArray[41].count++;
break;
case 'Q':
myArray[42].count++;
break;
case 'R':
myArray[43].count++;
break;
case 'S':
myArray[44].count++;
break;
case 'T':
myArray[45].count++;
break;
case 'U':
myArray[46].count++;
break;
case 'V':
myArray[47].count++;
break;
case 'W':
myArray[48].count++;
break;
case 'X':
myArray[49].count++;
break;
case 'Y':
myArray[50].count++;
break;
case 'Z':
myArray[51].count++;
break;
	}
	
}

void populateStructsArray(CountsLetters myArray[], int arrayLength)
{
	//Going to make all the counts innitially 0
	for (int i=0; i<arrayLength; i++)
	{
		myArray[i].count=0;
	}
	
	//This is a massive switch for all the characters
	for (int i=0; i<arrayLength; i++)
	{
	switch (i)
	{
case 0:
myArray[0].character='a';
break;
case 1:
myArray[1].character='b';
break;
case 2:
myArray[2].character='c';
break;
case 3:
myArray[3].character='d';
break;
case 4:
myArray[4].character='e';
break;
case 5:
myArray[5].character='f';
break;
case 6:
myArray[6].character='g';
break;
case 7:
myArray[7].character='h';
break;
case 8:
myArray[8].character='i';
break;
case 9:
myArray[9].character='j';
break;
case 10:
myArray[10].character='k';
break;
case 11:
myArray[11].character='l';
break;
case 12:
myArray[12].character='m';
break;
case 13:
myArray[13].character='n';
break;
case 14:
myArray[14].character='o';
break;
case 15:
myArray[15].character='p';
break;
case 16:
myArray[16].character='q';
break;
case 17:
myArray[17].character='r';
break;
case 18:
myArray[18].character='s';
break;
case 19:
myArray[19].character='t';
break;
case 20:
myArray[20].character='u';
break;
case 21:
myArray[21].character='v';
break;
case 22:
myArray[22].character='w';
break;
case 23:
myArray[23].character='x';
break;
case 24:
myArray[24].character='y';
break;
case 25:
myArray[25].character='z';
break;
case 26:
myArray[26].character='A';
break;
case 27:
myArray[27].character='B';
break;
case 28:
myArray[28].character='C';
break;
case 29:
myArray[29].character='D';
break;
case 30:
myArray[30].character='E';
break;
case 31:
myArray[31].character='F';
break;
case 32:
myArray[32].character='G';
break;
case 33:
myArray[33].character='H';
break;
case 34:
myArray[34].character='I';
break;
case 35:
myArray[35].character='J';
break;
case 36:
myArray[36].character='K';
break;
case 37:
myArray[37].character='L';
break;
case 38:
myArray[38].character='M';
break;
case 39:
myArray[39].character='N';
break;
case 40:
myArray[40].character='O';
break;
case 41:
myArray[41].character='P';
break;
case 42:
myArray[42].character='Q';
break;
case 43:
myArray[43].character='R';
break;
case 44:
myArray[44].character='S';
break;
case 45:
myArray[45].character='T';
break;
case 46:
myArray[46].character='U';
break;
case 47:
myArray[47].character='V';
break;
case 48:
myArray[48].character='W';
break;
case 49:
myArray[49].character='X';
break;
case 50:
myArray[50].character='Y';
break;
case 51:
myArray[51].character='Z';
break;
}
}
}

void readFiles(ifstream &myStream, CountsLetters myArray[], int arrayLength)
{
	//Going to populate the struct array
	populateStructsArray(myArray, arrayLength);
	
	
	string line;
	while (myStream.good())
	{
		myStream>>line;
		incrementsCountOfLetter(myArray, arrayLength, line[0]);
	}
	
}

void printsStats(CountsLetters myArray[], int arrayLength)
{
	int countLowercase=0;
	int countUppercase=0;
	int totalCout=0;
	
	//First loop
	for (int i=0; i<arrayLength; i++)
	{
		if (i<=25)
		{
			countLowercase+=myArray[i].count;
		}
		else //Array index 26 and above (it corrresponds to A-Z)
		{			
			countUppercase+=myArray[i].count;
		}
	}
	
	//Output perliminary statistics
	cout<<"The number of lower case letters is "<<countLowercase<<endl;
	cout<<"The number of upper case letters is "<<countUppercase<<endl;
	
	cout<<"The number and percentage of usage in each category is: "<<endl;
	
	//Second loop
	for (int i=0; i<arrayLength; i++)
	{
		double var=0;
		if (i<=25)
		{
			var=(double)(myArray[i].count/countLowercase)*100;
		}
		else //Capital letters
		{
			var=(double)(myArray[i].count/countUppercase)*100;
		}
		
		cout<<myArray[i].character<<" "<<var<<endl;
	}
}

void inputAndSuch(CountsLetters myArray[], int arrayLength)
{
	//Now call the input function
	ifstream myStream("input.txt");
	
	//This implicitly does the counting.
	readFiles(myStream, myArray, arrayLength);
}

int main(int argc, char** argv) 
{
	
	//Making the array of structs
	CountsLetters myArray[52];
	
	inputAndSuch(myArray, 52);
	
	printsStats(myArray, 52);
	
	return 0;
}
