#include<iostream>
using namespace std;

bool ascending_order(int array[],int size);
/*arrange in ascending order*/
bool can_Be_Arranged(int array[],int size);
/*for telling wether arranged or not*/
main()
{
    int size;       //variable daclaration

    cout<<"Enter the length of the array: ";
    cin>>size;

    int array[size-1];       //array daclaration

    cout<<"Enter the elements of the array: "<<endl;

    for(int index = 0; index < size; index++)
    {
        cin>>array[index];
    }

    cout<<"Can be arranged: "<<ascending_order(array,size);     //calling the function and printing on screen

}
bool ascending_order(int array[],int size)
{
    int swap;       //variable daclaration
    int result;

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

    result = can_Be_Arranged(array,size);


    return result;      //returning the value

}
bool can_Be_Arranged(int array[],int size)
{
    bool result;        //variable daclaration

    result = false;

    for(int index = 0; index < size-1; index++)
    {
        if(array[index] + 1 == array[index + 1])
        {
            result = true;
        }
        else
        {
            result = false;
            break;
        }
    }

    return result;          //returning the value
}