#include <iostream>
#include <windows.h>
using namespace std;

//Task(08)OP: UMAS


void Gotoxy(int x,int y);			//prototype
void CalculateAggregate(string name, float MatricMarks, float InterMarks, float EcatMarks);
void CompareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);
void Menu();

int main()
{
		
	int choice;		//variable daclaration


	system("cls");
	Menu();		//calling


	cout << "Enter your choice (1 or 2): ";
        cin >> choice;

	if(choice==1)
	{
		string name;
        	float MatricMarks, InterMarks, EcatMarks;

        	cout << "Enter Your name: ";
        	cin >> name;

        	cout << "Enter Matric marks: ";
        	cin >> MatricMarks;

        	cout << "Enter Inter marks: ";
        	cin >> InterMarks;

        	cout << "Enter Ecat marks: ";
        	cin >> EcatMarks;

		CalculateAggregate(name,MatricMarks,InterMarks,EcatMarks);
	}

	if(choice==2)
	{
		string nameStd1,nameStd2;
		float ecatMarksStd1, ecatMarksStd2;

		cout << "Enter name of first Student: ";
        	cin >> nameStd1;

        	cout << "Enter Ecat marks of first Student: ";
        	cin >> ecatMarksStd1;

        	cout << "Enter name of second Student: ";
        	cin >> nameStd2;

        	cout << "Enter Ecat marks of second Student: ";
        	cin >> ecatMarksStd2;

        	CompareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);



	}


	
}


void Menu()
	{
		
		Gotoxy(70,1);
		cout<<"UNIVERSITY OF ENGINEERING AND TECHNOLOGY,LAHORE"<<endl;
		Gotoxy(75,2);
		cout<< "University Admission Management System" <<endl;
		Gotoxy(75,3);
   		cout<< "______________________________________" << endl;
		Gotoxy(85,5);
        	cout<< "1. Calculate Aggreate"<< endl;
		cout<<""; 
		Gotoxy(85,6);
       	 	cout<< "2. Compare Marks" << endl;

		Gotoxy(75,8);
       		cout<< "_______________________________________" << endl;
	
	}

void CalculateAggregate(string name, float MatricMarks, float InterMarks, float EcatMarks)
	{

		float aggregate = (0.3*(MatricMarks/1100*100))+(0.3*(InterMarks/550*100))+(0.4*(EcatMarks/400*100));
		cout<< "Aggregate score for "<< name<< " in UET is: "<<aggregate <<"%";


	}


void CompareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
	{

        if (ecatMarksStd1 > ecatMarksStd2)
	{
        	cout << nameStd1 << " has higher marks in ECAT." << endl;
		cout <<"Roll Number of "<<nameStd1<<" is: 1"<< endl;
		cout <<"Roll Number of "<<nameStd2<<" is: 2"<< endl;
        }

	if (ecatMarksStd2 > ecatMarksStd1)
	{
        	cout << nameStd2 << " has higher marks in ECAT." << endl;
		cout <<"Roll Number of "<<nameStd2<<" is: 1"<< endl;
		cout <<"Roll Number of "<<nameStd2<<" is: 1"<< endl;
        }
	 
	if (ecatMarksStd2 == ecatMarksStd1)
	{
        cout << "Both students have same marks." << endl;
        }
	


	}
void Gotoxy(int x,int y)
	{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
