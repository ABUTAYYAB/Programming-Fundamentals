#include<iostream>
using namespace std;
main(){
	int numberofsides;
	int degree;
	cout<<"Enter the number of sides of the polygon: ";
	cin>>numberofsides;
	degree=(numberofsides-2)*180;
	cout<<"The sum of internal angles of a "<<numberofsides<<"-sided polygon is: "<<degree<<" degrees";
}