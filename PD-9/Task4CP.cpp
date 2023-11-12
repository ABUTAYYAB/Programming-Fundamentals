#include <iostream>
using namespace std;

void even_Odd_Transform(int array[], int size, int times);
/*A C++ function that performs an even-odd transform to an array, n times. One
even-odd transformation is

a. Adds two (+2) to each odd integer.
b. Subtracts two (-2) to each even integer.*/

main()
{

    int size;       //variable daclaration
    int times;


    cout<<"Enter the size of Array: ";
    cin>>size;


    int array[size-1];      //array daclaration


    for(int index = 0; index < size; index++)
    {

        cout<<"Enter Element "<<index+1<<": ";
        cin>>array[index];

    }


    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>times;


    even_Odd_Transform(array,size,times);       //function calling and printing on screen

}
void even_Odd_Transform(int array[], int size, int times)       //function defination
{

    for(int loop = times; loop > 0; loop--)
    {

        for(int loop = 0; loop < size; loop++)
        {

            if(array[loop]%2 != 0)
            {

                array[loop] = array[loop] + 2;

            }
            else if(array[loop]%2 == 0)
            {
                
                array[loop] = array[loop] - 2;
                
            }

        }

    }

    cout<<"[";

    for(int loop = 0; loop < size ; loop++)     // printing the array
    {
        
        if(loop == size-1)
        {
            cout<<array[loop]<<"]";
        }
        else
        {
            cout<<array[loop]<<", ";
        }


    }

}
