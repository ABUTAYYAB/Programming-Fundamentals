#include<iostream>
#include<windows.h> // using this because we are using functionns from this library
using namespace std;



string Change_direction_enemy1(string directionenemy1);
string Change_direction_enemy2(string directionenemy2);
string Change_direction_enemy3(string directionenemy3);


void Print_wall();   //it will print the boundry
void Score();
int score = 0;
int score_X = 20 , score_Y = 15;



void print_enemy1();  // movement of enemy 1
void remove_enemy1();
void move_enemy1(string directionenemy1);
string directionenemy1="right";



void print_enemy2();    // movement of enemy 2
void remove_enemy2();
void move_enemy2(string directionenemy2);
string directionenemy2 = "down";



void print_enemy3();    // movement of enemy 3
void remove_enemy3();
void move_enemy3(string directionenemy3);
string directionenemy3 =  "diagonal down";



void Print_player();
void remove_player();   // movement of the player
void move_player();


char getCharAtxy(short int x, short int y);  // for telling which key is entered by user

void movePlayerRight();   //player movement controled by user

void movePlayerLeft();

void movePlayerUp();

void movePlayerdown();




void Gotoxy(int x, int y);    // for printing at specified location



int e1x = 4 , e1y = 1;    //daclaring varibles globally
int e2x = 67 , e2y = 1;
int e3x = 60 , e3y = 1;





int px = 10 , py = 25; //player



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
        move_enemy3(directionenemy3);
        directionenemy3=Change_direction_enemy3(directionenemy3);

        move_enemy1(directionenemy1);
        directionenemy1=Change_direction_enemy1(directionenemy1);
        
        move_enemy2(directionenemy2);
        directionenemy2=Change_direction_enemy2(directionenemy2);

        



        
        if (GetAsyncKeyState(VK_LEFT))
    {
            movePlayerLeft();   // for left
    }

    else if (GetAsyncKeyState(VK_RIGHT))
    {
            movePlayerRight();  //for right
    }

    else if (GetAsyncKeyState(VK_UP))
    {
            movePlayerUp();   // for up
    }

    else if (GetAsyncKeyState(VK_DOWN))
    {
            movePlayerdown(); //for down
    }
        


        Sleep(50);
        Score();
        

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
    cout<<"score : "<<endl;


}
void Score()
{
    Gotoxy( score_X ,score_Y);
    cout<<"~0~"<<endl;
    Gotoxy (9 , 31);
    cout<<score;

     
     if(px == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }

    else if(px + 1 == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px + 2 == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px + 3 == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px + 4 == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px + 5 == score_X && py == score_Y )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px == score_X && py == score_Y + 1 )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px == score_X && py == score_Y + 2 )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px == score_X && py == score_Y + 3 )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px == score_X && py == score_Y + 4 )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }
    else if(px == score_X && py == score_Y + 5 )
     {
        score = score + 1;
        Gotoxy (9 , 31);
        cout<<score;
     }




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
    cout<<" O "<<endl;
    Gotoxy(e1x,e1y+1);
    cout<<"---"<<endl;
    Gotoxy(e1x,e1y+2);
    cout<<"- -"<<endl;
    Gotoxy(e1x,e1y+3);
    cout<<"- -"<<endl;
}
void remove_enemy1()        // Function defination
{
    Gotoxy(e1x,e1y);
    cout<<"   "<<endl;
    Gotoxy(e1x,e1y+1);
    cout<<"   "<<endl;
    Gotoxy(e1x,e1y+2);
    cout<<"   "<<endl;
    Gotoxy(e1x,e1y+3);
    cout<<"   "<<endl;    
}


string Change_direction_enemy1(string directionenemy1)
{
    if(e1x==5)
    {
        directionenemy1="right";  
    }

    if(e1x==50)
    {
        directionenemy1="left";
    }
    return directionenemy1;
}


void move_enemy1(string directionenemy1)      // Function defination
{
    remove_enemy1();
    if(directionenemy1=="right")
    {
        e1x=e1x+1;
    }
    if(directionenemy1=="left")
    {
        e1x=e1x-1;
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



string Change_direction_enemy2(string directionenemy2)
{
    if(e2y==20)
    {
        directionenemy2="up";
    }
    if(e2y==5)
    {
        directionenemy2="down";  
    }
    return directionenemy2;
}


void move_enemy2(string directionenemy2)      // Function defination
{
    remove_enemy2();
    if(directionenemy2=="down")
    {
        e2y =e2y +1;
    }
    if(directionenemy2=="up")
    {
        e2y =e2y - 1;
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



string Change_direction_enemy3(string directionenemy3)
{
    if(e3x == 60 )
    {
        directionenemy3="diagonal down";
    }
    if(e3y == 15 )
    {
        directionenemy3="diagonal up";  
    }
    return directionenemy3;
}


void move_enemy3(string directionenemy3)      // Function defination
{
   

    remove_enemy3();
    

    if(directionenemy3 == "diagonal down")
    {
        e3y = e3y + 1;
        e3x = e3x - 1;
        
    }
    if(directionenemy3=="diagonal up")
    {
        e3y = e3y - 1;
        e3x = e3x + 1;
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
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';

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