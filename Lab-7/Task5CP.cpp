#include<iostream>
using namespace std;

int digitSum(int number);
/*A function that takes a number from
the user and prints the sum of its digits on
the console screen.*/
main()
{
    int number;             //variable daclaration

    cout<<"Enter a number: ";
    cin>>number;

    cout<<"Sum of digits: "<<digitSum(number);       //function calling and printing

}
int digitSum(int number)               //function defination
{
    int mod = 1;
    int sum = 0;

    while(number > 0)
    {


        mod = number%10;
        number = number/10;
        sum = sum + mod;

    }
 
                return sum;
}

