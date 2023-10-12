#include<iostream>
using namespace std;

float Find_greatest(float num1 , float num2 , float num3);   // it will compare 3 numbers and tell which one is the greatest 

main()         //main body
{ 
    float num1;    // variable daclaration
    float num2; 
    float num3;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;

    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<Find_greatest(num1 , num2 , num3);   //function calling and printing on the screen

}

float Find_greatest(float num1 , float num2 , float num3)   // function defination
{
    
    if(num1>=num2)
    {
        if(num1>=num3)
        {
            return num1;
        }
        if(num1<num3)
        {
            return num3;
        }
    }

    if(num2>=num1)
    {
        if(num2>=num3)
        {
            return num2;
        }
        if(num2<num3)
        {
            return num3; 
        }
    }




}
