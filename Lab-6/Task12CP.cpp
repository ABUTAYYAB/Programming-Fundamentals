#include<iostream>
using namespace std;

float Total_income(string ticket, int columns, int rows);

/*In a cinema hall the chairs are ordered in a rectangle shape in r rows and c columns.
There are three types of screenings with tickets of different prices:
● Premiere – a premiere screening, with a price of 12.00 EUR.
● Normal – a standard screening, with a price of 7.50 EUR.
● Discount – a screening for children and students at a reduced price – 5.00 EUR.
Write a function that enters a type of screening (string), the number of rows, and the
number of columns in the hall (integer numbers) and returns the total income from tickets
from a full hall.*/

main()      //main  body
{

    string ticket;  //varible daclaration
    int columns;
    int rows;

    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>ticket;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    cout<<Total_income(ticket,columns,rows);    //calling function and printing output on screen


}
float Total_income(string ticket, int columns, int rows)     // function defination
{
    float result;   //varible daclaration  

    if(ticket == "Premiere")
    {
        result = columns*rows*12.00;
    }

    if(ticket == "Normal")
    {
        result = columns*rows*7.50;
    }

    if(ticket == "Discount")
    {
        result = columns*rows*5.00;
    }
    
        return result;
    


}