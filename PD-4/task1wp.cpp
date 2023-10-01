//Task 01(WP): Write a program that prints the test initially and then moves the cursor positiontothegivenXYlocationonthescreen

#include<iostream>
#include<windows.h>
using namespace std;


void Gotoxy(int x, int y);	
/*A Function that  moves the cursor position to the
 given XY location on the screen*/



main()
{
	system("cls");	
	cout<<"Test";
	
	Gotoxy(15,15);		//function calling
	cout<<"My Name is Abu Tayyab";
	
}
void Gotoxy(int x, int y)	//function header
{
	COORD cordinates;
	cordinates.X=x;
	cordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}

	