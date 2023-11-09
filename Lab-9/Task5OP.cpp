#include <iostream>
using namespace std;


void store_Numbers(int number);
/*it will store numbers in an array that are not present already*/


void print_Numbers(int array[], int number);
/*it will print the unique numbers*/


main()
{

    int number;     //variable daclaration

    cout<<"Enter the number of elements: ";
    cin>>number;


    if (number > 0)
    {

        cout<<"Enter "<<number<<" numbers, one per line: "<<endl;
        store_Numbers(number);   //function calling

    }
    else
    {

        cout<<"Invalid input. Number of elements must be greater than 0.";

    }

}

void store_Numbers(int number)     //function defination
{
    int index;
    int input;
    int array[number];
    bool not_present;

    index = 0;


    for (int loop = 0; loop < number; loop++) 
    {

        not_present = true;


        cin>>input;


        for (int loop = 0; loop < index; loop++) 
        {

            if (array[loop] == input)
            {

                not_present = false;
                cout<<"Already Entered: "<<input<<endl;

            }

        }


        if(not_present)
        {

            array[index] = input; 
            index++;

        }

        
    }


    
    print_Numbers(array,index);        //function calling


}
void print_Numbers(int array[],int number)      //function defination
{



    cout<<"Unique numbers entered: ";



    for (int index = 0; index < number; index++)
    {
        if(index != (number-1))
        {

            cout<<array[index]<<" ";

        }
        else
        {
            cout<<array[index];
        }

    }

}
