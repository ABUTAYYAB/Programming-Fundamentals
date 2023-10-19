#include<iostream>
using namespace std;

void printTable(int num);
//A program to calculate the sum of the first 100 natural numbers.

main()
{
    int num;       //variable daclaration

    cout<<"Enter a number: ";
    cin>>num;

    printTable(num); //function calling


}
void printTable(int num)         //function defination
{
    for(int i = 1; i <= 10 ; i++)
    {

        cout<<num<<" x "<<i<<" = "<<num*i<<endl;

    }


}