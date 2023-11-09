#include<iostream>
using namespace std;

int find_Largest(int array[],int number);
/*Write a program that takes n numbers from the user and stores them in an array and call a
function that returns the largest number entered by the user.*/

main()
{
    int number;     //variable daclaration

    cout<<"Enter the number of elements: ";
    cin>>number;
    cout<<"Enter "<<number<<" numbers, one per line: "<<endl;

    int array[number];       //array daclaration
     
    for(int i = 0 ; i<number ; i++)
    {
        cin >> array[i];
    }

    cout<<"The largest number entered is: "<<find_Largest(array,number);        //function calling

}
int find_Largest(int array[],int number)         //function defination
{
    int max ;
    max = array[0];
    for(int i = 0; i<(number) ;i++)
    {
       if(array[i]>=max)
       {
        max = array[i];
       }  
    }

    return max;       //returning the value
}
