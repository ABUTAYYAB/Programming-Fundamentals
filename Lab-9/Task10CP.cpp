#include <iostream>
using namespace std;

void something(string argument);
/*Write a program that prints the string "something" joined with a space " " and the given
argument a.*/

main()
{
    string argument;        //array daclaration

    cout<<"Enter the argument 'a': ";
    getline(cin,argument);

    something(argument);        //function calling

}
void something(string argument)     //function defination
{

    cout<<"Result: something "<<argument;


}
