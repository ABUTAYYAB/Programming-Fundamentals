#include<iostream>
using namespace std;

bool Greater_number(float num1,float num2);  // it will return 1 if num1 is bigger otherwise it wil retiurn 0

main()   // main function starting
{
    float num1; // variable daclaration
    float num2;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<Greater_number(num1, num2);    //function calling and printing on the screen



}
bool Greater_number(float num1,float num2)     // function defination
{
    
    if(num1>num2)
    {
        return 1;
    }

        if(num1<num2)
    {
        return 0;
    }

}
