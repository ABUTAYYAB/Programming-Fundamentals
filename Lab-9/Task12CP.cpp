#include <iostream>
using namespace std;


bool is_Special_Array(int array[], int index);
/*An array is special if every even index contains an even number and every odd index
contains an odd number. Create a function that returns true if an array is special, and
false otherwise.*/

main()
{

    int index;       //variable daclaration


    cout<<"Enter the size of the array: ";
    cin>>index;


    cout<<"Enter "<<index<<" elements of the array: "<<endl;


    int array[index-1];     //array daclaration

    for(int loop = 0; loop < index ; loop++)
    {
        cin>>array[loop];
    }



    if(is_Special_Array(array,index))       //function calling
    {

        cout<<"The array is special";
        
    }
    else
    {

        cout<<"The array is not special";

    }


}
bool is_Special_Array(int array[], int index)       //function defination
{

    int new_Index;

    new_Index = index-1;

    bool result;

    result = false;

    for(int loop = 0; loop < index; loop++)
    {
        if(loop%2==0)
        {
            if(array[loop]%2==0)
            {
                result = true;
                continue;
            }
            if(loop%2!=0)
            {
                if(array[loop]%2!=0)
                {
                result = true;
                continue;
                
                }
            }
        }
    }


    return result;      //returning the value



}