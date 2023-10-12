#include<iostream>
using namespace std;

bool Are_same_number(int num1,int num2 , int num3);

/*Task 11(CP):
Write a program that inputs the speed (decimal number) and prints speed information. For
speed up to 10 (inclusive), print "slow". For speed over 10 and up to 50, print "average".
For speed over 50 and up to 150, print "fast". For speeds over 150 and up to 1000, print
"ultra-fast". For higher speed, print "extremely fast".*/

main()     //main body
{
    int num1;   //variable  daclaration
    int num2;
    int num3;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;

    cout<<Are_same_number(num1,num2 ,num3);     //calling function and printing output on screen

}

bool Are_same_number(int num1,int num2 , int num3)      //function defination
{
    if(num1 == num2 && num2 == num3)
    {
        return 1;
    }

    else
    
    {
        return 0;
    }
}