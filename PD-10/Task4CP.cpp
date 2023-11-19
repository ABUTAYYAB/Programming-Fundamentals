#include<iostream>
using namespace std;

int volume_Combined(int array[], int number);
/*Given an array of boxes, create a program that displays the total volume of
all those boxes combined together. A box is represented by consecutive 3 elements in the
array: length, width and height.
For instance, [2, 3, 2, 6, 6, 7, 1, 2, 1] should display 266 since (2 x 3 x 2) + (6 x 6 x 7) +
(1 x 2 x 1) = 12 + 252 + 2 = 266.*/

main()
{
    int number;     //variable daclaration
    int new_number;

    cout<<"Enter the number of boxes: ";
    cin>>number;
    new_number = number*3;

    cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;

    int array[new_number-1];        //array daclaration


    for(int index = 0; index < new_number; index++)
    {
        cin>>array[index];
    }

    cout<<"Total volume of all boxes: "<<volume_Combined(array,number);     ////calling the function and printing on screen

}
int volume_Combined(int array[], int number)        //function defination
{

    int result;     //variable daclaration

    result = 0;     //initialization

    for(int index = 0; index < number*3; index +=3)
    {


        result = result +  array[index]+array[index+1]+array[index+2];    
          
        
    }

    return result;       //returning the value


}