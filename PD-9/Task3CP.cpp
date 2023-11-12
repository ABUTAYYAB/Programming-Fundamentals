#include <iostream>
using namespace std;

bool same_Elements(string numbers[] , int size);
/*Create a program that checks in an array (slot machine outcome) and prints true if all
elements in the array are identical, and false otherwise.*/

main()
{

    int size;       //variable daclaration

    cout<<"Enter the size of Array: ";
    cin>>size;

    string elements[size];      //array daclaration

    for(int index = 0; index < size; index++)
    {

        cout<<"Enter Element "<<index+1<<": ";
        cin>>elements[index];

    }


    cout<<same_Elements(elements,size);         //function calling and printing on screen

}
bool same_Elements(string numbers[] , int size)         //function defination
{

    bool result = 0;

    for(int index = 1; index < size; index++)
    {

        if(numbers[0] == numbers[index])
        {

            result = 1;

        }

    }

    return result;          //returning the value
}