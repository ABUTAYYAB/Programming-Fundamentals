//Task7(CP):Flower shop


#include<iostream>
using namespace std;

void Flowershop(int red_rose , int white_rose , int tulips);  //this function will calculate the price of flowers


main()
{
	int red_rose;	//variable daclaration
	int white_rose;
	int tulips;

	cout<<"Red Rose: ";
	cin>>red_rose;
	cout<<"White Rose: ";
	cin>>white_rose;
	cout<<"Tulips: ";
	cin>>tulips;

	Flowershop(red_rose,white_rose ,tulips);	//calling

}

void Flowershop(int red_rose, int white_rose , int tulips)
{
	float result;
	result=(red_rose*2)+(white_rose*4.10)+(tulips*2.50);
		if(result>=200)
		{
		cout<<"Original Price: $"<<result<<endl;
		cout<<"Price after Discount: $"<<result-(result*0.2)<<endl;
		}
		if(result<200)
		{
		cout<<"Original Price: $"<<result<<endl;
		cout<<"No discount applied.";
		}
}	

