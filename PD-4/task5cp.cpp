//Task5(CP):A function that takes your position a and your friend's position band prints a string “true”or“false”of whether it's possible to earn abonus on any die roll or not.


#include<iostream>
using namespace std;

void Possiblebonus(int your_position, int friends_position );	//true or false for bonus


main()
{
	int your_position;		//variable daclaration
	int friends_position;

	cout<<"Enter your position: ";
	cin>>your_position;
	cout<<"Enter your friend's position: ";
	cin>>friends_position;



	Possiblebonus(your_position,friends_position); 	//calling

}
void Possiblebonus(int your_position, int friends_position )
{
	int result;

	if((friends_position-your_position)<=6)
	{
		cout<<"true";
	}

	if((friends_position-your_position)>6)
	{
		cout<<"false";
	}
}
	
	




















