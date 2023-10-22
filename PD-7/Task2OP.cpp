#include <iostream>
using namespace std;

void print_Halfdiamond(int num);
/*Write a program using Nested Loops that generates the following shape on the console
screen.*/

main() 
{
    int num;       //variable daclaration

    cout<<"Enter desired number of rows: ";
    cin>>num;

    print_Halfdiamond(num);  // function calling
    

}

void print_Halfdiamond(int num)       //function defination
{
    int loop1;
    int loop2;

    loop1 = num;
    loop2 = num;
    


    for(int row1 = 1 ;row1 <= loop1; row1++)
    {

        for(int j = 1; j<= loop1 - row1; j++)
        {

                cout<<" ";

        }

        for(int k = 1; k<=row1 ; k++)
            {

                cout<<"*";

            }

            cout<<endl;

    }

    for(int row2 = loop2 ; (row2 <= loop2 && row2>0 ); row2--)
    {

        for(int j = 1; j<= loop2 - row2; j++)
        {

                cout<<" ";
            
        }

        for(int k = 1; k<=row2 ; k++)
        {

                cout<<"*";

        }

        cout<<endl;

    }


}

