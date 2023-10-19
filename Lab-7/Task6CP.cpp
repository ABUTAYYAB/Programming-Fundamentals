#include<iostream>
using namespace std;

int calculateGCD(int num1, int num2);
/*The greatest Common Divisor (GCD) or
Highest Common Factor (HCF) of two
positive integers is the largest positive
integer that divides both numbers without
a remainder.*/

int calculateLCM(int num1, int num2,  int num3);
/*The Least Common Multiple (LCM) of
two integers is the smallest integer that is
a multiple of both numbers.*/

main()
{
    int num1;           //variable daclaration
    int num2;
    int num3;


    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;


    num3 = calculateGCD(num1,num2);    //function calling    


    cout<<"GCD: "<<num3<<endl;   
    cout<<"LCM: "<<calculateLCM(num1 , num2 , num3);  //function calling and printing  


}
int calculateGCD(int num1, int num2)        //function defination
{
        int gcd;

        while(num1 != num2)
        {
            if(num1>num2)
            {

                num1 = num1-num2;
                gcd = num1;

            }

            else if(num2 > num1)
            {
                num2 = num2 - num1;
                gcd = num2;
            }
            


        }

                return gcd;



}
int calculateLCM(int num1, int num2, int num3)        //function defination
{
    
    int lcm;

    
    lcm = (num1*num2)/num3;

    return lcm;


}
