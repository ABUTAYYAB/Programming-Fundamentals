#include<iostream>
using namespace std;
void evenorodd(int number);
main()
{
	int number;    //variable declaration
	cout<<"Enter a number: ";
	cin>>number;
	evenorodd(number);
}
void evenorodd(int number)
{
	if(number%2==0)  //it will return true in case of even
	{ cout<<"Number "<<number<<" is even";}
	if(number%2!=0)  // condition
	{cout<<"Number "<<number<<" is odd";}
}