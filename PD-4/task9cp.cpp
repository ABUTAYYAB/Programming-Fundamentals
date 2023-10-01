//Task9(CP): A Function telling the user if they need to buy moreTP! 


#include<iostream>
using namespace std;

void Tpchecker(int people, int tp);	//it will check the remaininh supply of tissue.


main()
{
	int people;		//variable daclaration
	int tp;

	cout<<"Number of people in the household: ";
	cin>>people;

	cout<<"Number of rolls of TP: ";
	cin>>tp;

	
	Tpchecker(people, tp);

}	
void Tpchecker(int people, int tp)
{
	int days_remaining;
	days_remaining=(tp*500)/(people*57);
	if(days_remaining>=14)
		{
		cout<<"Your TP will last "<<days_remaining<<" days, no need to panic!";
		}

	if(days_remaining<14)
		{
		cout<<"Your TP will only last "<<days_remaining<<" days, buy more!";
		}
}

	










