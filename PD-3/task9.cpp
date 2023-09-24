#include<iostream>
using namespace std;
main()
{
	int number;
	int number1;
	int number2;
	int number3;
	int number4;
	int sum;
	cout<<"Enter a 4-digit number: ";
	cin>>number;
	number1 = number % 10;
	number2 = (number % 100)-number1;
	number3 = (number % 1000)-number1-number2;
	number4 = (number % 10000)-number1-number2-number3;
	sum = (number4/1000)+(number3/100)+(number2/10)+number1;
	cout<<"Sum of the individual digits: "<<sum;
}
	
	
	
	