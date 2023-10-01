//Task4(CP): Write a challan issuing program to tell if the car was speeding or not

#include<iostream>
using namespace std;

void Checkspeed(int speed); //it will check the speed

main()
{
	int speed;	//variable daclaration
	
	
	cout<<"Speed: ";
	cin>>speed;

	
	Checkspeed(speed);	//calling
}
void Checkspeed(int speed)
{
	if(speed>100)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}


	if(speed<=100)
	{
	cout<<"Perfect! You're going good.";
	}
}	










