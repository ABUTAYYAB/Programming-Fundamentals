#include<iostream>
using namespace std;

float Volume_pyramid(int height,int length, int width, string unit );  // this function will take the parameters and will calculate the volume 

main()        //main body of the program
{
    int height;     //variable daclaration
    int length;
    int width;
    string unit;
    float result;

    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;

    result = Volume_pyramid( height, length,  width, unit );  //function calling n storing its value in variable


    cout<<"The volume of the pyramid is "+ to_string(result) +" cubic "<<unit;
}
float Volume_pyramid(int height,int length, int width, string unit )     //function defination
{
    float result;
    if(unit == "millimeters")
    {
        result = (height*length*width*1000000000.0)/3.0;
    }
    if(unit == "centimeters")
    {
        result = (height*length*width*1000000.0)/3.0;
    }

    if(unit == "meters")
    {
        result = (height*length*width)/3.0;
    }
    if(unit == "kilometers")
    {
       result = (height*length*width)/3.0*100000000.0;
    }
    return result;   //returing the value after calculations
    
    
}