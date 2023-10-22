#include <iostream>
using namespace std;

bool is_Prime(int num);
/*Write a function that takes a number as input and returns whether the number is a prime
number or not.
Prime numbers are those who are only divisible by 1 and its own.
Some examples of prime numbers are 2, 3, 5, 7, 11, 13, 17 etc.*/

main()
{

        int num;                //variable daclaration

        cout<<"Enter Number: ";
        cin>>num;



        cout<<is_Prime(num);            // function calling



}
bool is_Prime(int num)            //function defination
{
        int number;
        int result;

        number = 0;
        result = 0;


        for(int iteration = 1; iteration <= num ; iteration++)
        {

                if(num % iteration == 0)
                {

                        number++;

                }

        }

        if(number == 2)
        {

                result = 1;

        }

        return result;           //returning the value

}

