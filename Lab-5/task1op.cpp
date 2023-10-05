#include<iostream>
#include<cmath>
using namespace std;


main()
{
	float num1; //variable daclaration
	float num2;
	float result;

	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;

	result = min(num1,num2);   // using pre defined function

	cout<<"The minimum of "<<num1<<" and "<<num2<<" is: "<<result;
}


	


