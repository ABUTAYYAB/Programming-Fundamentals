//Task01(CP):A function that take 2 number and tell weather it is true and false.


#include<iostream>
using namespace std;

void Isequal(int x, int y);	//it will tell the numbers are equal or not


main()
{
	int num1;	variable Daclaration
	int num2;


	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;


	Isequal(num1,num2);  //function calling
		
}
void Isequal(int x, int y)
{
	if(x==y)
	{
	cout<<"true";
	}

	if(x!=y)
	{
	cout<<"false";
	}
}
