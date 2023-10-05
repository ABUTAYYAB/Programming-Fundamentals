#include <iostream>
#include <cmath>
using namespace std;

void Education(float a, float b ,float c); 	//A function to find roots of equation

main()
{
	float a;  //variable daclaration
	float b;
	float c;

	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;

	Education(a , b , c); // function calling
}
void Education(float a, float b ,float c)   //header
{	
	float root1;  	//variable daclaration
	float root2;
	float imaginary1;
	float imaginary2;
	

	float disc = (b*b)-(4*a*c);
	if(disc>0)
	{
		root1 = (-b+sqrt(disc))/(2*a);
		root2 = (-b-sqrt(disc))/(2*a);

		cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
	}

	if(disc==0)
	{
		root1 =-b/(2*a);

		cout<<"Solution: x = "<<root1;
	}

	if(disc<0)
	{
		root1 = (-b)/(2*a);
		imaginary1 = (sqrt(-disc))/(2*a);
		root2 =(-b)/(2*a);
		imaginary2 = (sqrt(-disc))/(2*a);

		cout<<"Complex Solutions: x = "<<root1<<" + "<<imaginary1<<"i and x = "<<root1<<" - "<<imaginary2<<"i";
	}
}
		
		
		