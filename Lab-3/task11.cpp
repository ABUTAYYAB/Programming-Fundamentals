#include <iostream>
using namespace std;
main()
{
	int cp,br,p;
	cout<<"Enter the current world population: ";
	cin>>cp;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>br;
	p=br*12*30+cp;
	cout<<"The population in three decades will be: "<<p;
}