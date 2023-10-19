#include<iostream>
using namespace std;

int totalDigits(int number);
/*A program that prompts the user to
input the length of Fibonacci series and
then call the function to display the series.*/

main()
{
    int number;          //variable daclaration

    cout<<"Enter a number: ";
    cin>>number;

    cout<<"Total number of digits: "<<totalDigits(number);    //function calling and printing

}
int totalDigits(int number)          //function defination
{
        int digits = 0;

        if(number< 0)               //incase of  -ve number
        {
            number = -1*number;
        }
        else if(number ==  0)
        {
            digits =1;
        }

        
        while(number > 0)
        {


            digits = digits + 1;

            number = number/10; 

            
        }

                 return (digits);
        



}