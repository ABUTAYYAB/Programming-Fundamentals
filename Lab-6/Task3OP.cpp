#include<iostream>
using namespace std;

float Perimeter(char letter , float value);   // it will calculate the perimeters according to their shape 

main()    // main body
{
    float value;  //variable daclaration
    char letter;

    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>letter;
    cout<<"Enter the value: ";
    cin>>value;

    
    cout<<"The perimeter is: "<<Perimeter( letter ,  value);    //function calling and printing on the screen
}

float Perimeter(char letter , float value)    //function defination
{

    float result = value;    // initialization
    if(letter == 's')
    {
        result = 4*value;
    }

    if(letter == 'c')
    {
        result = 6.28*value;
    } 

    if(letter == 't')
    {
        result = 3*value;
    }   

    if(letter == 'h')
    {
        result = 6*value;
    }    

    return result;   // return the value
}