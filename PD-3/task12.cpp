#include <iostream>
using namespace std;
main()
{ 
	int num;
	cout<<"Number of square meters you can paint: ";
	cin>>num;
	int width;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	int height;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	int area;
	area= (width * height);
	float paint;
	paint = num/area;
	cout<<"Number of walls you can paint: "<<paint;

}