#include<iostream>
using namespace std;

float Cheapest_rate(int km , string time); 
   
/*A student has to travel n kilometers. He can choose between three types of transportation:
● Taxi. Starting fee: 0.70 EUR. Day rate: 0.79 EUR/km. Night rate: 0.90 EUR/km.
● Bus. Day / Night rate: 0.09 EUR/km. It can be used for distances of a minimum of
20 km.
● Train. Day / Night rate: 0.06 EUR/km. It can be used for distances of a minimum
of 100 km.*/

main() //main body
{
    int km;          //variable daclaration
    string time;

    cout<<"Enter the number of kilometers: ";
    cin>>km;
    cout<<"Enter the period of the day (day/night): ";
    cin>>time;

    cout<<"Lowest price for "<<km<<" kilometers: "<<Cheapest_rate(km ,time)<<" EUR";//calling function and printing output on screen



}
float Cheapest_rate(int km , string time)       //function defination
{
    float result;

    if((km>0 && km<= 20) && time == "day")
    {
        result = km*0.79 + 0.70;
    }

    if((km>0 && km<= 20) && time == "night")
    {
        result = km*0.90 + 0.70;
    }

    if((km>20 && km<= 100) && (time == "night" || time == "day"))
    {
        result = km*0.09;
    }

    if((km>100) && (time == "night" || time == "day"))
    {
        result = km*0.06;
    }
        return result; // returning the result;
}
