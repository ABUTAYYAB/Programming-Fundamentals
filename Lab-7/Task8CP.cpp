#include<iostream>
using namespace std;


string calculate_Money(int age, int price_Washingmachine, int price_Toy);
/*Lilly is N years old. For each birthday she receives a present. For each odd birthday (1, 3,
5, ..., n) she receives toys, and for each even birthday (2, 4, 6, ..., n) she receives money.
For her second birthday she received 10.00 USD, and the amount is increased by 10.00
USD for each following even birthday (2 -> 10, 4 -> 20, 6 -> 30 etc.). Over the years
Lilly has secretly saved her money. Lilly's brother, in the years when she received money,
took 1.00 USD from each of the amounts. Lilly has sold the toys, received over the years,
each one for P USD and added the sum to the amount of saved money. With the money
she wanted to buy a washing machine for X USD.
Write a function that calculates how much money she has saved and if it is enough to
buy a washing machine.*/

main()
{

    int price_Toy;                //variable daclaration
    int price_Washingmachine;
    int age;



    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>price_Washingmachine;
    cout<<"Enter the unit price of each toy: ";
    cin>>price_Toy;



    cout<<calculate_Money(age, price_Washingmachine, price_Toy);     //function calling and printing



}
string calculate_Money(int age, int price_Washingmachine, int price_Toy)      //function defination
{


    float odd_Birthday = 0;           //variable daclaration and unitialization
    float even_Birthday = 0;
    float even_Birthday_money = 0;
    float odd_Birthday_money = 0;
    string result = "yes";
    int totalMoney = 0;



    for(int iteration = 1; iteration < age ; iteration += 2)
    {


        odd_Birthday += 1;
        

    }


    for(int iteration = 2; iteration <= age ; iteration += 2)
    {

    	even_Birthday = even_Birthday + 10;
        even_Birthday_money = even_Birthday_money + even_Birthday;
        even_Birthday_money -= 1;


    }
    

    

    odd_Birthday_money = odd_Birthday * price_Toy;
    totalMoney = odd_Birthday_money + even_Birthday_money;



    if(totalMoney >= price_Washingmachine)
    {


        totalMoney = totalMoney-price_Washingmachine;
        result = "Yes!\n" + to_string(totalMoney);
  

    }

    else if(totalMoney < price_Washingmachine)
    {
        totalMoney = -1*(totalMoney-price_Washingmachine);
        result = "No!\n" + to_string(totalMoney);


    }

                  return result;      //returning the value



}
