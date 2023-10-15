#include<iostream>
using namespace std;

string checkPointPosition(int height, int x_coord, int y_coord);
/*Write a program that enters an integer h and the coordinates of a given point {x, y}
(integers) and prints whether the point is inside the figure (inside), outside of the figure
(outside) or on any of the borders of the figure (border).*/

main()
{
   int height;     //variable daclaration
   int x_coord;
   int y_coord;

   cout<<"Enter height: ";
   cin>>height;
   cout<<"Enter x coordinate: ";
   cin>>x_coord;
   cout<<"Enter y coordinate: ";
   cin>>y_coord;

   cout<<checkPointPosition(height,x_coord,y_coord); //function calling and printing

}
string checkPointPosition(int height, int x_coord, int y_coord)    //function defination
{
    string result;

    if(y_coord == height || y_coord == (3*height) )
    {
        result = "Border";
    }

    else if(x_coord == height || x_coord == (2*height) )
    {
        if(y_coord > height)
        {
            result = "Border";
        }

    }
    else if((y_coord > 0) && (y_coord < height ))
    {
            result = "Inside";
    }

    else if( x_coord > height && x_coord < (2*height))
    {
        if(y_coord > height)
        {
            result = "Inside";
        }

    }


    else
    {
        result = "Outside";
    }

            return result;   //returning the result



}