//Task07(OP):Write a program to make Player patrol(continuously move up and down) vertically inside the maze.

#include<iostream>
#include<windows.h>
using namespace std;


void Gotoxy(int x, int y);	//prototype
/* A Function that  moves the cursor position to the
 given XY location on the screen*/


void Printmaze();	//it will print a maze
void Moveplayer(int x, int y); // it will print at specific point


main() 
{
	int x = 10;  	//Variable Daclaration
	int y = 2;	//Variable Daclaration
	system("cls");
	Printmaze();
	while(true)		//keep printing
	{
		Moveplayer(x,y);
		y=y+1;
		if(y==13)
		{
		   y=2;
		}
	}
	Moveplayer(x,y);	//calling
}

void Moveplayer(int x, int y)	//function header
{
	Gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	Gotoxy(x,y);
	cout<<" ";
}

void Gotoxy(int x, int y)	//function header
{
	COORD cordinates;
	cordinates.X=x;
	cordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}

void Printmaze() 	//function header
{
	cout<<"#####################################################################"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#####################################################################"<<endl;
}
