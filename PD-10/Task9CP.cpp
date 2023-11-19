#include<iostream>
using namespace std;

int special_Value(int array[], int size);
/*You are given an array nums of non-negative integers. nums is considered special if
there exists a number x such that there are exactly x numbers in nums that are greater
than or equal to x.
Notice that x does not have to be an element in nums.
Return x if the array is special, otherwise, return -1. It can be proven that if nums is
special, the value for x is unique.*/

main()
{
    int size;           //variable daclaration

    cout<<"Enter the length of the array: ";
    cin>>size;

    int array[size-1];          //array daclaration

    cout<<"Enter the elements of the array: "<<endl;

    for(int index = 0; index < size; index++)
    {
        cin>>array[index];
    }


    cout<<"Special value: "<<special_Value(array,size);     //calling the function and printing on screen

}
int special_Value(int array[], int size)        //function defination
{


    int result;         //variable daclaration
    int non_Zero_Value;
    int num;

    result = -1;            //initialization
    non_Zero_Value = 0;
    num = 0;
    

    for (int index = 0; index < size; index++)
    {
        if (array[index] != 0)
        {
            non_Zero_Value++;
        }

    }

    for (int index = 0; index < size; index++)
    {
        if (array[index] >= non_Zero_Value)
        {
            num++;
        }
    }

    if (num == non_Zero_Value)
    {
        result =  num;
    }


   
    return result;          //returning the value
}