#include<iostream>
using namespace std;

bool is_Repeating_cycle(int array[],int size, int cycle_Length);
/*Take input from the user in an array and the length of cycle in local
variables. You are tasked with writing a function that takes in 1 input as parameter: The
length of each cycle.
Return the boolean value true if the array is a repeating cycle, and false if the array is a
non-repeating cycle. All cycles begin with the first element of the array. Return true if the
cycle length is greater than the array length.*/

main()
{
    int size;           //variable daclaration
    int cycle_Length;

    cout<<"Enter the length of the array: ";
    cin>>size;

    int array[size-1];          //array daclaration

    cout<<"Enter the elements of the array: "<<endl;

    for(int index = 0; index < size; index++)
    {
        cin>>array[index];
    }

    cout<<"Enter the length of the cycle: ";
    cin>>cycle_Length;

    cout<<"Output: "<<is_Repeating_cycle(array, size,cycle_Length);     //calling the function and printing on screen

}
bool is_Repeating_cycle(int array[],int size, int cycle_Length)     //function defination
{
    bool check;     //variable daclaration

    check = false;      //initialization

    if(size > cycle_Length)
    {

        for(int index = 0; index <= cycle_Length; index++)
        {

            if(array[index] == array[index+(cycle_Length)])
            {
                check = true;
            }
        }
    }
    else
    {
        check = true;
    }



    return check;       //returning the value

}