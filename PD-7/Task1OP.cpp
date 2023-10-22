#include <iostream>
using namespace std;

void print_Diamond(int num);
/*Write a program using Nested Loops that generates the following shape on the console
screen.*/


main() 
{

    int num;        //variable daclaration

    cout<<"Enter desired number of rows: ";
    cin>>num;


    print_Diamond(num);    // function calling

    

}
void print_Diamond(int num)     //function defination
{ 

    for ( num ; num >= 1; num--) 
    {
    
        for (int k = 1; k <= num; k++) 
        {

                cout << "*";

        }

        cout<<endl;
        
    }

}


