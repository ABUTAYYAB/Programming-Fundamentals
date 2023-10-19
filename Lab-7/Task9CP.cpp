#include <iostream>
using namespace std;


string calculate_Price(int money, int year);
/*Ivan is 18 years old and receives an inheritance that consists of X money and a time
machine. He decides to return to 1800, but does not know if the money will be enough to
live without working. Write a program that calculates if Ivan will have enough money to
not have to work until a particular year (inclusive). Assuming that for every even (1800,
1802, etc.) year he will spend 12000 dollars. For every odd one (1801, 1803, etc.) he will
spend 12000 + 50 * [the age he will have reached in the given year].*/


main()
{
    int year;            //variable daclaration
    int money;

    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;


    cout << calculate_Price(money, year);            //function calling and printing
}

string calculate_Price(int money, int year)      //function defination
{

    float even_Year = 0;             //variable daclaration and unitialization
    float odd_Year = 0;
    float even_Year_budget = 0;
    float odd_Year_budget = 0;
    float money_Have = 0;
    float age = 1;
    int total_Budget = 0;
    string result;


    for (int iteration = 1800; iteration <= year; iteration++)
    {


        if(iteration % 2 == 1)
        {
            odd_Year++;
        }

        else if (iteration % 2 == 0)
        {
            even_Year++;
        }


    }


    

    for (int iteration = 1; iteration <= odd_Year; iteration++)
    {
        
        odd_Year_budget = odd_Year_budget +12000;
        odd_Year_budget = odd_Year_budget+(18 + age)*50;
        age +=2;
        
    }


        even_Year_budget = even_Year*12000;
        money_Have = even_Year_budget + odd_Year_budget;



    if(money < money_Have)
    {
        total_Budget = -1*(money-money_Have);
        result = "He will need " + to_string(total_Budget) + " dollars to survive.";

    }


    else if(money > money_Have)
    {
        total_Budget = money-money_Have;
        result = "Yes! He will live a carefree life and will have " + to_string(total_Budget) + " dollars left.";

    }


  
                return result;      //returning



}