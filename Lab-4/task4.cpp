#include<iostream>
using namespace std;
void sum(float num1,float num2);
void mul(float num1,float num2);
void div(float num1,float num2);
void sub(float num1,float num2);
main()
{
	float num1; // variable declaration
	float num2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if(op=='+') //condition for addition
	{
	   sum(num1,num2);
	}
	if(op=='-')   //condition for subtraction
	{
	   sub(num1,num2);
	}
	if(op=='*')   //condition for Multiplication
	{
	   mul(num1 ,num2);
	}
	if(op=='/')   //condition for Division
	{
	   div(num1 ,num2);
	}
}
void sum(float num1,float num2)
{
	float result;
	result= num1+num2;
	cout<<"Addition: "<<result;
}
void mul(float num1,float num2)
{
	float result;
	result= num1*num2;
	cout<<"Multiplication: "<<result;
}
void div(float num1,float num2)
{
	float result;
	result= num1/num2;
	cout<<"Division: "<<result;
}
void sub(float num1,float num2)
{

	float result;
	result= num1-num2;
	cout<<"Subtraction: "<<result;
}








