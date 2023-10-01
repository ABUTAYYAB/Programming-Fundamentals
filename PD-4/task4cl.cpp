//Task04(CL):Usethewhile(true)toprintthePlayerandmovehorizontallyindefinitely

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
	int x = 4;  	//Variable Daclaration
	int y = 4;	//Variable Daclaration
	system("cls");
	Printmaze();
	while(true)		//keep printing
	{
		Moveplayer(x,y);
		x=x+1;
		if(x==21)
		{
		   x=4;
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
