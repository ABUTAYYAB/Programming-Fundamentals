#include<iostream>
using namespace std;

void generateFibonacci(int length);
/*A function that takes a number from
the user and print its multiplication table
on the console screen.*/

main()
{
    int length;      //variable daclaration

    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;


    generateFibonacci(length);  //function calling



}
void generateFibonacci(int length)      //function defination
{
    int next;
    int num1 = 0 ;
    int num2 = 1;



    for(int x = 1  ; x<=(length) ; x++)
    {
        if(x == (length))
        {
            cout<<num1;
        }
        else
        {

            cout<<num1<<", ";
            
        }


        next = num1+num2;
        num1 = num2;
        num2 = next;

        
    }


}