#include <iostream>
using namespace std;
main()
{
	float p,c,v;
	cout<<"Enter voltage (in volts): ";
	cin>>v;
	cout<<"Enter current (in amperes): ";
	cin>>c;
	p=c*v;
	cout<<"The power is "<<p<<" watts.";
}