#include<iostream>
using namespace std;

void ascending_order(int array[]);
/*Imagine you are a warehouse manager and you have a list of 10 packages
with their respective weights. Your task is to sort the packages in ascending order of
weight so that the lighter packages can be loaded onto delivery trucks first. How would
you sort the packages based on their weight in the same array? Write a C++ program to
sort the same array in ascending order.*/
void print_Array(int array[]);
/*printing the array on screen*/

main()
{
    int array[10];          //array daclaration

    cout<<"Enter the weights of the 10 packages: "<<endl;

    for(int index = 0; index < 10; index++)
    {
        cin>>array[index];
    }

    ascending_order(array);         //calling the function


}
void ascending_order(int array[])       //function defination
{
    int swap;        //variable daclaration

    for (int loop = 0; loop < 9; loop++)
    {
        for (int index = 0; index < 9 ; index++)
        {
            if (array[index] > array[index + 1])
            {
        
                swap = array[index];             //swap elements if they are not in order 
                array[index] = array[index + 1];
                array[index + 1] = swap;

            }
        }
    }

    print_Array(array);         //calling the function

}
void print_Array(int array[])           //function defination
{

    cout<<"Sorted array in ascending order: ";

    cout<<"[";
    for(int index = 0; index < 10; index++)
    {
        if(index != 9)
            cout<<array[index]<<", ";
        else
        {
            cout<<array[index]<<"]";
        }
    }


}