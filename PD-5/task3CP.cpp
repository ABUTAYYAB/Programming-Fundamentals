#include<iostream>
using namespace std;

float Calculate_tax(int price, char code);   //it will calculate the  total tax of car depending upon thw type of vehicle

main()
{
    float final_price; // variable daclaration
    float price;
    char code;
    
    cout<<"Enter the vehicle type code (M, E, S, V, T,): ";
    cin>>code;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;

    final_price = Calculate_tax(price, code); //function calling n storing its value in variable

    cout<<"The final price of the vehicle of type "<<code<<" after adding the tax is $"<<final_price<<".00.";



}
float Calculate_tax(int price, char code) // function body
{
    float tax;
    float final_price;
    if(code == 'M')
    {
    tax = price*6/100;
    final_price = price + tax;
    return final_price;
    }
        if(code == 'E')
    {
    tax = price*8/100;
    final_price = price + tax;
    return final_price;
    }
        if(code == 'S')
    {
    tax = price*10/100;
    final_price = price + tax;
    return final_price;
    }
        if(code == 'V')
    {
    tax = price*12/100;
    final_price = price + tax;
    return final_price;
    }
        if(code == 'T')
    {
    tax = price*15/100;
    final_price = price + tax;
    
    return final_price;  // returning the value after calculation
    }
    

}
