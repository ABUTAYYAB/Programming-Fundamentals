#include<iostream>
using namespace std;

int marathon(int array[], int size);
/*A program that takes in an array of miles run every Saturday and returns Kaka's
total number of progress days.*/
bool validate(int array[], int index);
/*to tell that miles is greater then last one*/

main()
{

    int size;           //variable daclaration

    cout<<"Enter the number of Saturdays: ";
    cin>>size;

    int array[size-1];          //array daclaration

    for(int index = 0; index < size; index++)
    {
        cout<<"Enter miles run for Saturday "<<index+1<<": ";
        cin>>array[index];
    }

    cout<<"Total progress days: "<<marathon(array, size);    //calling the function and printing on screen

}
int marathon(int array[], int size)         //function defination
{

    int count;      //variable daclaration

    count = 0;      //initialization

    for(int index = 1; index < size; index++)
    {

        if(validate(array,index))
        {
            count++;
        }

    }

    return count;           //returning the value

}
bool validate(int array[], int index)       //function defination
{

    bool check;     //variable daclaration

    check = true;        //initialization

    if(array[index-1] > array[index])
    {
        check = false;
    }

    return check;        //returning the value
}