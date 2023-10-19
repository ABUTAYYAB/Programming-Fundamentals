#include<iostream>
using namespace std;

int frequencyChecker(int number ,int digit);
/*A function named “totalDigits” that
takes the number as input parameter and
returns the total number of digits in that
number.*/

main()
{
    int number;          //variable daclaration
    int digit;

    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the digit to check: ";
    cin>>digit;


    cout<<"Frequency: "<<frequencyChecker(number,digit);       //function calling and printing


}
int frequencyChecker(int number, int digit)         //function defination
{


    int mod = 1;
    int frequency = 0;
    if(number < 0)                 //incase of  -ve number
    {
        number = -1* number;
    }

    while(number > 0)
    {
        mod = number % 10;
        number = number / 10;

    if(mod == digit)
        {
            frequency = frequency + 1;
        }
        
    }

                 return frequency;

}