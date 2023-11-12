#include <iostream>
using namespace std;

int coloring_Time(string colors[], int size);
/*When coloring a striped pattern, you may start by coloring each square sequentially,
meaning you spend time needing to switch coloring pencils.
Create a program where given an array of colors cols, it prints how long it takes to color
the whole pattern. Note the following times:
● It takes 1 second to switch between pencils.
● It takes 2 seconds to color a square.*/

main()
{

    int size;     //variable daclaration 

    cout<<"Enter the size of Array: ";
    cin>>size;

    string colors[size];     //array daclaration   


    for(int index = 0; index < size; index++)
    {

        cout<<"Enter Element "<<index+1<<": ";
        cin>>colors[index];

    }



    cout<<"Time to color: "<<coloring_Time(colors,size)<<" seconds";        //function calling and printing on screen        
    
}
int coloring_Time(string colors[], int size)    //function defination      
{

    int count;          //variable daclaration 
    int time_For_squre;
    int result;

    count = 0;
    time_For_squre = size*2;

    for (int index=1; index<size; index++)
    {

        if (colors[index - 1] != colors[index])
        {

            count++;

        }

    }

    result = count+time_For_squre;

    return result;       //returning the value   

}