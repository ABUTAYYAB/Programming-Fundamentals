//Task6(CP): A function print the value that's the longest duration.


#include<iostream>
using namespace std;

void Longest_time(int hours, int minutes);	//it will take hour and minutes and tell which is the bigger one.


main()
{
	int hours;   	//Variable Daclaration
	int minutes;

	cout<<"Enter the number of hours: ";
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;

	
	Longest_time(hours, minutes);	//Function calling

}
void Longest_time(int hours, int minutes) 
{
	if((hours*60)>minutes)
	{
	cout<<hours;
	}

	if((hours*60)<minutes)
	{
	cout<<minutes;
	}
}








