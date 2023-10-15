#include<iostream>
using namespace std;

float Shop(string day, string fruit, double quantity);
/*Write a program that reads from the console a fruit (banana/apple / ...), a day of the week
(Monday / Tuesday / ...) and a quantity (a decimal number) and calculates the price
according to the prices from the tables above. Print “error” if it is an invalid day of the
week or an invalid name of a fruit.*/

main()
{

    string day;         //variable daclaration
    string fruit;
    double quantity;
    double result;

    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;

    result = Shop(day,fruit,quantity);   //function calling

    
    if(result == 0)     //error in case of unexpected input
    {  
        cout<<"error";
    }

    if(result != 0)
    {
        cout<<result;
    }
    

}

float Shop(string day, string fruit,double quantity)   //function defination
{

    float result = 0;

    if((day == "Monday" || day == "Tuesday") || (day == "Wednesday" ||(day == "Thursday" || day == "Friday" )))
    {
        if(fruit == "banana")
        {
            result = quantity*2.5;
            return result;
        }
        else if(fruit == "apple")
        {
            result = quantity*1.20;
            return result;
        }
        else if(fruit == "orange")
        {
            result = quantity*0.85;
            return result;
        }
        else if(fruit == "grapefruit")
        {
            result = quantity*1.45;
            return result;
        }
        else if(fruit == "kiwi")
        {
            result = quantity*2.70;
            return result;
        }
        else if(fruit == "pineapple")
        {
            result = quantity*5.50;
            return result;
        }
        else if(fruit == "grapes")
        {
            result = quantity*3.85;
            return result;
        }
        else
        {
            return 0;
        }
        
        
            
    }
    else if(day == "Sunday" || day == "Saturday" )
    {

        if(fruit == "banana")
        {
            result = quantity*2.70;
            return result;
        }
        else if(fruit == "apple")
        {
            result = quantity*1.25;
            return result;
        }
        else if(fruit == "orange")
        {
            result = quantity*0.90;
            return result;
        }
        else if(fruit == "grapefruit")
        {
            result = quantity*1.60;
            return result;
        }
        else if(fruit == "kiwi")
        {
            result = quantity*3.00;
            return result;
        }
        else if(fruit == "pineapple")
        {
            result = quantity*5.60;
            return result;
        }
        else if(fruit == "grapes")
        {
            result = quantity*4.20;
            return result;
        }
        else
        {
            return 0;
        }        
    }
    else
    {
        return 0;
    }
    


}