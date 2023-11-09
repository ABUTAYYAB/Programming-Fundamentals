#include<iostream>
using namespace std;

void reverse_Numbers(int array[] , int number);
/*Write a program that takes n numbers from the user, stores them in an array, and passes
them to a function that prints them in reverse order.*/

int main()
{
    int number;     //variable daclaration
    

    cout<<"Enter the number of elements: ";
    cin>>number;

    int array[number];      //array daclaration

    if(number<=0)
    {
        cout<<"Invalid input. Number of  elements must be greater than 0."<<endl;
        return 0;
    }

    cout<<"Enter "<<number<<" numbers, one per line: "<<endl;
    for(int i = 0; i < number ; i++)
    {
        cin>>array[i];
    }

    cout<<"Numbers in reverse order: ";
    reverse_Numbers(array , number);      //function calling

    return 0;

}
void reverse_Numbers(int array[] , int number)      //function defination
{
    for(int i = number-1; i>=0 ; i--)
    {

        cout<<array[i]<<" ";
        
    }

    cout<<endl;
}