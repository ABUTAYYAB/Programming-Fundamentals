#include<iostream>
using namespace std;

int full_Rotations(string array[], int size);
/*Given a list of directions to spin, "left" or "right", return an integer of how many full 360°
rotations were made. Note that each word in the array counts as a 90° rotation in that
direction.*/
main()
{
    int size;           //variable daclaration


    cout<<"Enter the length of the array: ";
    cin>>size;

    string array[size];

    cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;

    for(int index = 0; index < size; index++)
    {
        cin>>array[index];
    }

    cout<<"Number of full rotations: "<<full_Rotations(array,size);

}
int full_Rotations(string array[], int size)        //function defination
{

    int result;         //variable daclaration
    int right;
    int left;

    right = 0;          //initialization
    left = 0;

    for(int index = 0; index < size; index++)
    {
        if(array[index] == "left")
        {
            left++;
        }
        else if(array[index] == "right")
        {
            right++;
        }
    }


    result = (left*90)-(right*90);
    result = result/360;

    if(result < 0)
    {
        result = result*-1;
    }

    return result;      //returning the value

}