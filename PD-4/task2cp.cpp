//Task02(CP): Create a function that changes true to false and false to true.



#include<iostream>
using namespace std;

void Reverse(string value); //reverse the value

main()
{
	string name;	//variable daclaration

	cout<<"Enter 'true' or 'false': ";
	cin>>name;
	
	Reverse(name);
}
void Reverse(string value)
{
	if(value=="true")
	{
	cout<<"false";
	}

	if(value=="false")
	{
	cout<<"true";
	}
}

