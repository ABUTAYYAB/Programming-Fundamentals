#include<iostream>
using namespace std;
void vote(int age);
main()
{
	int age;   //variable declaration
	cout<<"Enter your age: ";
	cin>>age;
	vote(age);
}
void vote(int age) //header
{
	if(age>=18)   //condition
	{ cout<<"You are eligible to vote.";}
	if(age<18)    //condition
	{cout<<"You are not eligible to vote.";}
}