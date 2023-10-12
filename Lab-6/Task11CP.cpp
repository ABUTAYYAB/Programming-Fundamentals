#include<iostream>
using namespace std;

string Check_speed(int speed);

/*Write a program that inputs the speed (decimal number) and prints speed information. For
speed up to 10 (inclusive), print "slow". For speed over 10 and up to 50, print "average".
For speed over 50 and up to 150, print "fast". For speeds over 150 and up to 1000, print
"ultra-fast". For higher speed, print "extremely fast".*/

main()     //main body 
{
    int speed;      //variable daclaration
     
    cout<<"Enter the speed: ";
    cin>>speed;

    cout<<Check_speed(speed);       //calling function and printing output on screen


}
string Check_speed(int speed)     //function defination
{
    

    if(speed > 0 && speed<=10)
    {
        return "slow";
    }
    if(speed > 10 && speed <= 50)
        {
            return "average";

        }
    if(speed>50 && speed<=150)
    {
        return "fast";
    }
    if(speed>150 && speed<=1000)
    {
        return "ultra-fast";
    }
    if(speed>1000)
    {
        return "extremely fast";
    }

}

   