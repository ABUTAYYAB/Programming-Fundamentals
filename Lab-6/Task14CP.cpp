#include <iostream>
using namespace std;


string price(string ticket, int no_people, float total_budget);

/*The football fans have a shared budget, and the number of people in the group determines
what percentage of the budget will be spent on transportation:
● 1 to 4 – 75% of the budget
● 5 to 9 – 60% of the budget
● 10 to 24 – 50% of the budget
● 25 to 49 – 40% of the budget
● 50 or more – 25% of the budget*/



main()    //main body
{
    float total_budget = 0;     //variable daclaration
    int no_people = 0;
    string ticket;
    


    cout << "Enter the budget: ";
    cin >> total_budget;

    cout << "Enter the category (VIP/Normal): ";
    cin >> ticket;

    cout << "Enter the number of people in the group: ";
    cin >> no_people;

    cout << price(ticket, no_people, total_budget);     //calling function and printing output on screen
}
string price(string ticket, int no_people, float total_budget) //function defination
{
    string result;    //variable daclaration

    float transport;     
    float remaining;
    float ticket_money;
    float totalmoney;


    if (no_people <= 4 && no_people >=0 )
    {
        transport = total_budget * 0.75;
    }

    if (no_people >= 5 && no_people <= 9)
    {
        transport = total_budget * 0.60;
    }

    if (no_people >= 10 && no_people <= 24)
    {
        transport = total_budget * 0.50;
    }

    if (no_people >= 25 && no_people <= 49)
    {
        transport = total_budget * 0.40;
    }

    if (no_people >= 50)
    {
        transport = total_budget * 0.25;
    }

    if (ticket == "Normal")
    {
        ticket_money = 249.99;
    }
    if (ticket == "VIP")
    {
        ticket_money = 499.99;
    }

    totalmoney = ticket_money * no_people;   
    remaining = totalmoney + transport;

    if (remaining > total_budget)
    {
        remaining = remaining - total_budget;
        result = "Not enough money! You need " + to_string(remaining) + " leva."; // using to_string function
    }
    else
    {
        remaining = total_budget - remaining;
        result = "Yes! You have " + to_string(remaining) + " leva left.";
    }

    return result;          // returning the result
}