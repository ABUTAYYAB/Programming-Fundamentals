#include<iostream>
using namespace std;
void howmanystickers(int n);
main()
{
	int nofsides; // variable daclaration
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>> nofsides;
	howmanystickers(nofsides);
	
}
void howmanystickers(int n)  //header
{
	int result;
	result = n*n*6;        //processing
	cout<<"Number of stickers needed: "<<result;
}