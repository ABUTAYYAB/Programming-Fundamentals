#include <iostream>
#include <cmath>
using namespace std;

void Perp(float dist, float angle);	//it will tell tell us perpendicular

main()
{
        float dist;	//variable daclaration
	float angle;

    	cout << "Enter the distance from the base of the tree (in feet): ";
    	cin >> dist;
    	cout << "Enter the angle of elevation (in degrees): ";
    	cin >> angle;

    	Perp(dist, angle); 	//function calling
}

void Perp(float dist, float angle)   //header
{
    	float height;
    	float x= angle*3.1415926535897932384626433832/180;
    	height = tan(x) * dist;    //using pre defined trignometric functions

    	cout<<"The height of the tree is: "<<height<<" feet";
}