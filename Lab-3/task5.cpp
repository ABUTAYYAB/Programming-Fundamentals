#include <iostream>
using namespace std;
main()
{
	string name;
	float e,m,i;
	float agg;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>m;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>i;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>e;
	agg=(((e/400*0.5)+(m/1100*0.1)+(i/550*0.4))*100);
	cout<<"Aggregate score for "<<name<<" in UET is: "<<agg<<"%";
}