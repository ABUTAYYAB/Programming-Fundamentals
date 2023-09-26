#include<iostream>
using namespace std;
void fuelneeded(float d);
main()
{
	float distance;  //variable declaration
	cout<<"Enter the distance: ";
	cin>> distance;
	fuelneeded(distance);
}
void fuelneeded(float d)   //header
{	float result;
	result = d*10;    //for required result
	if(result>=100)
{
	cout<<"Fuel needed: "<<result;
}
	if(result<100)
{
cout<<"Fuel needed: 100"; //incase less then 100
}

}