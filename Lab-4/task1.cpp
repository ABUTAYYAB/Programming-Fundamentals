#include<iostream>
using namespace std;
void fuelneeded(float d)
{	float result;      //variable declaration
	result = d*10;
	cout<<"Fuel needed: "<<result;    //output

}
main()
{
	float distance; //function body
	cout<<"Enter the distance: ";
	cin>> distance;
	fuelneeded(distance);
}