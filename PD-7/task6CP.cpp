#include <iostream>
using namespace std;

bool is_Prime(int num);
/*it will tell wether the number is prime ort not*/


int primorial(int number);
/*A Primorial is a product of the first n prime numbers (e.g. 2 x 3 x 5 = 30). 2, 3, 5, 7, 11,
13 are prime numbers. If n was 3, you'd multiply 2 x 3 x 5 = 30 or Primorial = 30.
Create a function that returns the Primorial of a number.*/


main()
{
    int number;      //variable daclaration


    cout<<"Enter Number: ";
    cin>>number;


    cout<<primorial(number);         // function calling


}


bool is_Prime(int num)       //function defination
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

    if(number == 2)     //other wise result = 0;
    {

            result = 1; 

    }

    return result;      //returning the value

}




int primorial(int number)
{

    int num;
    int multiply;
    int result;

    num = 1;
    multiply = 1;
    result = 0;


    while(result < number)
    {
            
        if(is_Prime(num))  // function calling inside function
        {

            result++;
            multiply = num*multiply;

        }

        num++;
    }

    return multiply;        //returning the value


}