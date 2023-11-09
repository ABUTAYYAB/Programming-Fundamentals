#include <iostream>
using namespace std;

bool can_Pay_with_Change(float change[], float amount);
/*Given a total due and an array representing the amount of change in your pocket,
determine whether or not you are able to pay for the item. The change will always be
represented in the following order: quarters, dimes, nickels, and pennies.*/

main()
{
    int num;        //variable daclaration
    float amount;


    num = 3;

    float change[num];      //array daclaration

    cout<<"Enter quarters: ";
    cin>>change[0];

    cout<<"Enter dimes: ";
    cin>>change[1];

    cout<<"Enter nickels: ";
    cin>>change[2];

    cout<<"Enter pennies: ";
    cin>>change[3];

    cout<<"Enter the total amount due: $";
    cin>>amount;

    cout<<"Can you pay the amount? ";

    
    if(can_Pay_with_Change(change,amount))      //function calling
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


}
bool can_Pay_with_Change(float change[], float amount)       //function defination
{

    bool answer;
    float sum;
    answer = false;
    sum = 0;

    sum = sum +change[0]*0.25;
    sum = sum +change[1]*0.1;
    sum = sum +change[2]*0.05;
    sum = sum +change[3]*0.01;


    if(sum >= amount)
    {
        answer = true;
    }

    return answer;      //returning the value

}