#include <iostream>
using namespace std;

void number_Amplified(int num);
/*In this challenge, you must generate a sequence of consecutive numbers, from a lower
bound that will always be equal to 1, up to a variable given a higher bound (including the
bounds in the sequence).
Each number of the sequence that can be exactly divided by 4 must be amplified by 10
(see notes below).
Given a higher bound num, implement a function that displays the sequence of numbers
with every multiple of 4 that has been amplified on the console.*/

main()
{

    int num;         //variable daclaration

    cout<<"Enter the number to Amplify: ";
    cin>>num;
    

    number_Amplified(num);      // function calling

}
void number_Amplified(int num)        //function defination
{
    int number;       //variable daclaration

    number = 0;

    for(int i = 1; i <=num ; i++)
    {

        if(i % 4 == 0)
        {
                number = i*10;
                cout<<number<<", ";

                continue; //so that only number multiplied by 10 print not the number

        }
        
        if(i < num)
        {

                cout<<i<<", ";

        }

        else
        {

                cout<<i;

        }

    }
}


