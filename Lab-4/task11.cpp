#include<iostream>
using namespace std;
void nameprinting(string name);
main()
{

	string name;
	cout<<"Enter your name: ";
	cin>>name;
	nameprinting(name);
}
void nameprinting(string name)
{
	while(true) //infinite loop
	{
	cout<<name<<endl;
	}
}