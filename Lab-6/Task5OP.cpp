#include<iostream>
using namespace std;

float Store_v1(string day , string month , float amount);

/*A Store has announced to give a 10% discount on the total purchase amount every
Sunday of October, and a 5% discount every other Sunday.*/

main()   // main body
{
   string day;  // variable daclaration
   string month;
   float amount;

   cout<<"Enter Purchase Day: ";
   cin>>day; 
   cout<<"Enter Purchase Month: ";
   cin>>month; 
   cout<<"Enter Purchase Amount: ";
   cin>>amount; 
   

   cout<<"Payable Amount after discount: "<<Store_v1(day , month ,amount); // function calling and printing on screen

}
float Store_v1(string day , string month , float amount) // function defination
{
    
    float result =  amount;    // initizlization

    if(day == "Sunday" && month == "October")
    {
        result = amount - amount*0.1;
    }

    if(day == "Sunday" && month != "October")
    {
        result = amount - amount*0.05;
    }
        return result;   // returning
}
