//Task3(CP)A function that takes the country’s name, the ticket price in dollars, and then displays the final price of the ticket after the discount

#include<iostream>
using namespace std;


void Airline_company(string name, float price );  //header



main()
{

	string name;	//Variable Daclaration
	float price;


	cout<<"Enter the country's name: ";
	cin>>name;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;



	Airline_company(name , price);	//calling

}
void Airline_company(string name, float price)
{ 
	
	float price_after_discount;
	
	if(name=="Pakistan")
	{
	price_after_discount=price-(price*0.05);
	cout<<"Final ticket price after discount: $"<<price_after_discount;
	}

	if(name=="Ireland")
	{
	price_after_discount=price-(price*0.1);
	cout<<"Final ticket price after discount: $"<<price_after_discount;
	}


	if(name=="India")
	{
	price_after_discount=price-(price*0.2);
	cout<<"Final ticket price after discount: $"<<price_after_discount;
	}


	if(name=="England")
	{
	price_after_discount=price-(price*0.3);
	cout<<"Final ticket price after discount: $"<<price_after_discount;
	}

	
	if(name=="Canada")
	{
	price_after_discount=price-(price*0.45);
	cout<<"Final ticket price after discount: $"<<price_after_discount;
	}
}	
	


