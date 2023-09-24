#include <iostream>
using namespace std;
main()
{
	float q,t,i;
	cout<<"Enter the charge (Q) in Coulombs: ";
	cin>>q;
	cout<<"Enter the time (t) in seconds: ";
	cin>>t;
	i=q/t;
	cout<<"The current (I) is: "<<i<<" Amperes";
}