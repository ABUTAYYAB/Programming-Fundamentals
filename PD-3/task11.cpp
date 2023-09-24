#include<iostream>
using namespace std;
main()
{
	int age;
	int moves;
	int total_house;
	float years;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>moves;
	total_house=moves+1;
	years=age/total_house;
	cout<<"Average number of years lived in the same house: "<<years;
}
