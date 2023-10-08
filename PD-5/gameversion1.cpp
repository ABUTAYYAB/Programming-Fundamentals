#include<iostream>
#include<windows.h> // using this because we are using functionns from this library
using namespace std;


void Print_wall();   //it will print the boundry

void print_enemy1();  // movement of enemy 1
void remove_enemy1();
void move_enemy1();


void print_enemy2();    // movement of enemy 2
void remove_enemy2();
void move_enemy2();

void Print_player();
void remove_player();   // movement of the player
void move_player();


void print_enemy3();    // movement of enemy 3
void remove_enemy3();
void move_enemy3();

char getCharAtxy(short int x, short int y);  // for telling which key is entered by user
void movePlayerRight();   //player movement controled by user
void movePlayerLeft();
void movePlayerUp();
void movePlayerdown();




void Gotoxy(int x, int y);    // for printing at specified location

int e1x = 1 , e1y = 1;    //daclaring varibles globally
int e2x = 67 , e2y = 1;
int e3x = 67 , e3y = 1;


int px = 10 , py = 25;
main()              //main body starts from here
{
    system("cls");

    Print_wall();
    print_enemy1();
    print_enemy2();
    print_enemy3();
    Print_player();


    while(true)        //infinite loop for enemy and player movement
    {
        if (GetAsyncKeyState(VK_LEFT))
    {
            movePlayerLeft();   // for left
    }
        if (GetAsyncKeyState(VK_RIGHT))
    {
            movePlayerRight();  //for right
    }
            if (GetAsyncKeyState(VK_UP))
    {
            movePlayerUp();   // for up
    }
            if (GetAsyncKeyState(VK_DOWN))
    {
            movePlayerdown(); //for down
    }



        move_enemy1();
        move_enemy2();
        move_enemy3();

        Sleep(100);
    }
    


}
void Print_wall()       // Function defination
{
    cout<<"******************************************************************************"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"*                                                                            *"<<endl;
    cout<<"******************************************************************************"<<endl;

}
void Gotoxy(int x, int y)	// Function defination
{
	COORD cordinates;
	cordinates.X=x;
	cordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}
void print_enemy1()     // Function defination
{
    Gotoxy(e1x,e1y);
    cout<<" O"<<endl;
    Gotoxy(e1x,e1y+1);
    cout<<"----"<<endl;
    Gotoxy(e1x,e1y+2);
    cout<<"-  -"<<endl;
    Gotoxy(e1x,e1y+3);
    cout<<"-  -"<<endl;
}
void remove_enemy1()        // Function defination
{
    Gotoxy(e1x,e1y);
    cout<<"  "<<endl;
    Gotoxy(e1x,e1y+1);
    cout<<"    "<<endl;
    Gotoxy(e1x,e1y+2);
    cout<<"    "<<endl;
    Gotoxy(e1x,e1y+3);
    cout<<"    "<<endl;    
}
void move_enemy1()      // Function defination
{
    remove_enemy1();
    e1x = e1x + 1;
    if(e1x > 70)
    {
        e1x = 2;
    }
    print_enemy1();
}

void print_enemy2()     // Function defination
{
    Gotoxy(e2x,e2y);
   cout<<"  /  \\"<<endl;
    Gotoxy(e2x,e2y+1);
   cout<<" || 0 ||"<<endl;
    Gotoxy(e2x,e2y+2);
   cout<<"  #####"<<endl;
    Gotoxy(e2x,e2y+3);
   cout<<"  ## ##"<<endl;
    Gotoxy(e2x,e2y+4);
   cout<<"  ## ##"<<endl;
}
void remove_enemy2()        // Function defination
{
    Gotoxy(e2x,e2y);
   cout<<"        "<<endl;
    Gotoxy(e2x,e2y+1);
   cout<<"         "<<endl;
    Gotoxy(e2x,e2y+2);
   cout<<"          "<<endl;
    Gotoxy(e2x,e2y+3);
   cout<<"          "<<endl;
    Gotoxy(e2x,e2y+4);
   cout<<"         "<<endl;
}
void move_enemy2()      // Function defination
{
    remove_enemy2();
    e2y = e2y + 1;
    if(e2y > 25)
    {
        e2y = 2;
    }
    print_enemy2();
}

void print_enemy3()     // Function defination
{
    Gotoxy(e3x,e3y);
    cout<<"###"<<endl;
    Gotoxy(e3x,e3y+1);
    cout<<"#0#"<<endl;
    Gotoxy(e3x,e3y+2);
    cout<<"###"<<endl;
    Gotoxy(e3x,e3y+3);
    cout<<"# #"<<endl;
}
void remove_enemy3()        // Function defination
{
    Gotoxy(e3x,e3y);
    cout<<"   "<<endl;
    Gotoxy(e3x,e3y+1);
    cout<<"   "<<endl;
    Gotoxy(e3x,e3y+2);
    cout<<"   "<<endl;
    Gotoxy(e3x,e3y+3);
    cout<<"   "<<endl;
}
void move_enemy3()      // Function defination
{
    remove_enemy3();

    if(e3x >  2 && e3y < 22)
    {
        e3y = e3y + 1;
        e3x = e3x - 1;
    }
    else
    {
        e3x = 67;
        e3y = 2;
    }
    print_enemy3();

}
void Print_player()     // Function defination
{
    Gotoxy(px,py);
    cout<<"  O  "<<endl;
    Gotoxy(px,py+1);
    cout<<"/ || \\"<<endl;
    Gotoxy(px,py+2);
    cout<<" ----"<<endl;
    Gotoxy(px,py+3);
    cout<<" |  |"<<endl; 
}
void remove_player()        // Function defination
{
    Gotoxy(px,py);
    cout<<"     "<<endl;
    Gotoxy(px,py+1);
    cout<<"        "<<endl;
    Gotoxy(px,py+2);
    cout<<"     "<<endl;
    Gotoxy(px,py+3);
    cout<<"     "<<endl; 
}


char getCharAtxy(short int x, short int y)      // Function defination
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void movePlayerRight()      // Function defination
{
if (getCharAtxy(px + 7, py) == ' '&& px < 69)
{
remove_player();
px = px + 1;
Print_player();
}
}

void movePlayerLeft()       // Function defination
{
if (getCharAtxy(px - 1, py) == ' '&& px > 2)
{
remove_player();
px = px - 1;
Print_player();

}
}

void movePlayerUp()     // Function defination
{
if (getCharAtxy(px , py -1) == ' '&& py >= 2)
{
remove_player();
py = py - 1;
Print_player();

}
}

void movePlayerdown()       // Function defination
{
if (getCharAtxy(px , py + 4) == ' '&& py < 26)
{
remove_player();
py = py + 1;
Print_player();

}
}