#include<iostream>
using namespace std;
void calculatepayableamount(string day,int rupee);
main()
{
	while (true) //to do it infinite times
	{
	string day; // variable declaration
	int rupee;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>rupee;
	calculatepayableamount(day,rupee);
	}
}
void calculatepayableamount(string day,int rupee)
{
	
	float result;
	if(day == "Sunday")
        {
	result = rupee-(rupee*0.1);  // 10% for sunday
	cout<<"Payable Amount: $"<<result<<endl;
        }
	if(day != "Sunday")
        {
	result = rupee-(rupee*0.05); //5% for other days
	cout<<"Payable Amount: $"<<result<<endl;
        }


}
	
	