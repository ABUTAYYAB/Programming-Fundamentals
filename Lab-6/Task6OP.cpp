#include<iostream>
using namespace std;

float Store_v2(string day , string month , float amount);

/*A Store has announced to give a 10% discount on the total purchase amount on every
Sunday or Month is October.*/

main()      //main body
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
   

   cout<<"Payable Amount after discount: "<<Store_v2(day , month ,amount); //calling function and printing output on screen

}

float Store_v2(string day , string month , float amount) //function defination
{
    
    float result =  amount;

    if(day == "Sunday" || month == "October")
    {
        result = amount - amount*0.1;
    }

        return result; // returning
}
