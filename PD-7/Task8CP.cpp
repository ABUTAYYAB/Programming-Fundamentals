#include <iostream>
#include <iomanip>   //beacuse using fixed and precision
using namespace std;


void cargo_Company(int number);
/*You are responsible for the logistics of various types of cargo. Depending on the weight
of each cargo, you need a different vehicle, and this will cost a different price per ton:
● Up to 3 tons – a minibus (200 USD per ton).
● From over 3 and up to 11 tons – truck (175 USD per ton).
● Over 11 tons – train (120 USD per ton).
Your task is to calculate the average price per ton of the cargo, and also what percentage
of the cargo is transported in each vehicle.*/


main()
{
    int number;        //variable daclaration

    cout<<"Enter the count of cargo for transportation: ";
    cin>>number;


    cargo_Company(number);        // function calling


}
void cargo_Company(int number)      //function defination
{

    float ton_cargo;         //variable daclaration
    float total_Tons;
    float mini_Bus;
    float mini_Bus_percent;
    float truck;
    float truck_Percent;
    float train;
    float train_Percent;
    float average_Price;

    ton_cargo = 0;
    total_Tons = 0;
    mini_Bus = 0;
    mini_Bus_percent = 0;
    truck = 0;
    truck_Percent = 0;
    train = 0;
    train_Percent = 0;
    average_Price = 0;


    for (int iteration = 1; iteration <= number; iteration++)
    {

        cout<<"Enter the tonnage of cargo "<<iteration <<": ";
        cin>>ton_cargo;


        if (ton_cargo >= 0 && ton_cargo <= 3)
        {

            mini_Bus += ton_cargo;
                
        }

        else if(ton_cargo > 3 && ton_cargo <= 11)
        {

            truck += ton_cargo;

        }

        else if(ton_cargo > 11)
        {

            train += ton_cargo;

        }


    }


    total_Tons = mini_Bus+truck+train;



    mini_Bus_percent = (mini_Bus/total_Tons)*100;
    truck_Percent = (truck/total_Tons)*100;
    train_Percent = (train/total_Tons)*100;


    average_Price = (((mini_Bus * 200) + (truck * 175) + (train * 120)) / (total_Tons));


    cout<<fixed;
    cout<<setprecision(2);
    cout<<average_Price<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<mini_Bus_percent<<"%"<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<truck_Percent<<"%"<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<train_Percent<<"%"<<endl;
    





}