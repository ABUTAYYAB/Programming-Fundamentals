#include<iostream>
using namespace std;

string Decide_activity(string temp , string humidity);
/*Write a C++ program to print the appropriate activity depending on the variable
temperature and humidity value. The table below assumes that the temperature can only
be warm and cold, and the humidity can only be dry and humid.*/

main()     // main body
{
    string temp;    // variable daclaration
    string humidity;

    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;

    cout<<"Recommended activity: "<<Decide_activity(temp ,humidity);  // function calling and printing on screen

}

string Decide_activity(string temp , string humidity)       // function defination    

{
    string activity; // variable daclaration

    if(temp == "warm" && humidity == "dry" )
    {
        activity = "Play tennis";
    }

    else if(temp == "warm" && humidity == "humid" )
    {
        activity = "Swim";
    }

    else if(temp == "cold" && humidity == "dry" )
    {
        activity = "Play basketball";
    }

    else if(temp == "cold" && humidity == "humid" )
    {
        activity = "Watch TV";
    }
        return activity;
}
