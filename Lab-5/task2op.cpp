#include<iostream>
#include<cmath>
using namespace std;


main()
{
	float base_num;		//variable daclaration
	float exponent;
	
	cout<<"Enter the base number: ";
	cin>>base_num;
	cout<<"Enter the exponent: ";
	cin>>exponent;

	cout<<base_num<<" raised to the power "<<exponent<<" is: "<<pow(base_num,exponent);// calling predefined function
}

