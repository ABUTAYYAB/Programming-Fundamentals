#include<iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);
/*A hotel offers two types of rooms: studio and apartment. Prices are in dollars ($). Write a
program that calculates the price of the whole stay for a studio and apartment. Prices
depend on the month of the stay:*/

main()
{
    string month;       //variable daclaration
    int numberOfStays;

    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;

    cout<<calculateHotelPrices(month,numberOfStays);   //function calling and printing


}

string calculateHotelPrices(string month, int numberOfStays)    //function defination
{
    float apartment = 0;  //variable daclaration and initilazition to prevent from garbage value
    float studio = 0;
    string result;

    if(month == "May" || month == "October")
    {
        studio = 50;
        apartment = 65;

        if(numberOfStays > 7 && numberOfStays < 14)
        {
        
        studio = 50;
        studio = studio - studio*0.050000;

        apartment =65;

        }

        else if(numberOfStays > 14)
        {
        studio = 50;
        studio = studio - studio*0.300000;

        apartment = 65;
        apartment = apartment - apartment*0.100000;
        }
       

    }
    else if(month == "June" || month == "September")
    {
        studio = 75.2000000;
        apartment = 68.700000;

        if(numberOfStays > 14)
        {
        studio = 75.200000;
        studio = studio - studio*0.200000;


        apartment = 68.700000;
        apartment = apartment - apartment*0.100000;

        }

    

    }
    else if(month == "July" || month == "August")
    {
    
        studio = 76;
        apartment = 77;

        if(numberOfStays > 14)
        {

        apartment = 77;
        apartment = apartment - apartment*0.100000;

        } 

    }


    result = "Apartment: "+ to_string(apartment*numberOfStays) + "$.\n" + "Studio: " + to_string(studio*numberOfStays) + "$.";
    return result;
  



}
