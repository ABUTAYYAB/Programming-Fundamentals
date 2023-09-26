#include<iostream>
using namespace std;
void calculatepayableamount(string day,int rupee);
main()
{
	string day;   //variable declaration
	int rupee;     //variable declaration
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>rupee;
	calculatepayableamount(day,rupee);
}
void calculatepayableamount(string day,int rupee)
{
	float result;
	if(day == "Sunday")  //discount only on sunday condition
{
	result = rupee-(rupee*0.1);
	cout<<"Payable Amount: $"<<result;
}
	if(day != "Sunday") // no discount other then sunday
{
	result = rupee;
	cout<<"Payable Amount: $"<<result;
}
}
	
	