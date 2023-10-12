#include<iostream>
using namespace std;

float Store_v4(string day , string month , float amount);

/*A Store has announced to give a 10% discount on the total purchase amount every
Sunday of Month October, or March, or August and a 5% discount on the total purchase
amount every Monday of November or December.*/


main()        // main body
{
   string day;  //variable daclaration
   string month;
   float amount;

   cout<<"Enter Purchase Day: ";
   cin>>day; 
   cout<<"Enter Purchase Month: ";
   cin>>month; 
   cout<<"Enter Purchase Amount: ";
   cin>>amount; 
   

   cout<<"Payable Amount after discount: "<<Store_v4(day , month ,amount);  //calling function and printing output on screen

}
float Store_v4(string day , string month , float amount) // function defination
{
    
    float result =  amount;

    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        result = amount - amount*0.1;
    }
    if(day == "Monday" && (month == "November" || month == "December"))
    {
        result = amount - amount*0.05;
    }

        return result;
}
