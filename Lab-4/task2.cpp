#include<iostream>
using namespace std;
void inchestofeet(float feet);
main()
{
	float inch;     // variable daclaration
	cout<<"Enter the measurement in inches: ";
	cin>> inch;
	inchestofeet(inch);
}
void inchestofeet(float feet)      //function header
{
	float result;
	result = feet/12;
	cout<<"Equivalent in feet: "<<result;
} 