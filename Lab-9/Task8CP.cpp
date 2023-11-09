#include <iostream>
using namespace std;


void insert_Array_in_Middle(int first_Array[],int first_Array_Size,int second_Array[],int second_Array_Size);
/*Create a program that takes two arrays and inserts the second array in the middle of the
first array. The first array always has two elements.*/
main()
{
    int first_Array_Size;       //variable daclaration
    int second_Array_Size;

    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>first_Array_Size;


    cout<<"Enter "<<first_Array_Size<<" elements for the first array, one per line: "<<endl;


    int first_Array[first_Array_Size-1];        //array daclaration

    for(int index = 0 ; index < first_Array_Size ; index++)
    {
        cin>>first_Array[index];
    }


    cout <<"Enter the number of elements for the second array: ";
    cin>>second_Array_Size;


    cout<<"Enter "<<second_Array_Size<<" elements for the second array, one per line: "<<endl;

    int second_Array[second_Array_Size-1];      //array daclaration

    
    for(int index = 0 ; index < second_Array_Size ; index++)
    {
        cin>>second_Array[index];
    }



    cout<<"Resulting array: ";
    insert_Array_in_Middle(first_Array,first_Array_Size,second_Array,second_Array_Size);         //function calling
  

}
void insert_Array_in_Middle(int first_Array[],int first_Array_Size,int second_Array[],int second_Array_Size)        //function defination
{

    cout<<"["<<first_Array[0]<<", ";


    for(int index = 0; index < second_Array_Size ; index++)
    {
        cout<<second_Array[index]<<", ";
    }


    cout<<first_Array[1]<<"]";

}