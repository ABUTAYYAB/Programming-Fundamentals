#include<iostream>
using namespace std;
void result(int number);
main()
{
	int number;     //variable declaration
	cout<<"Enter your score: ";
	cin>>number;
	result(number);
}
void result(int number)
{
	if(number>50)   //condition
	{ cout<<"Pass";}
	if(number<=50)  // condition
	{cout<<"Fail";}
}