#include<iostream> //this program is same as metioned in the slide of pd-5
using namespace std;    


int value1 = 10;
int value2 = 20;

int sum ();         //function prototype

main()
{
    int x = value1;         
    value1 = 100;
    x = 20;
    value2 = sum();       //function calling n storing its value in variable
    cout<<value1<<" "<<value2;

}
int sum ()           //function defination
{
    value1 = 40;
    return value1 + value2;
}
