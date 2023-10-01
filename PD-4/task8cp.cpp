//Task8(CP): Tom Cat.


#include<iostream>
using namespace std;

void  Pet(int holidays); 	//it will calculate that tom can or cannot sleep well.


main()
{
	int holidays;	//variable daclaration
	
	cout<<"Holidays: ";
	cin>>holidays;

	
	Pet(holidays);
}
void  Pet(int holidays)
{
	int result;	//variable daclaration
	int minutes;
	int total_hour;
	int total_minute;

	minutes=((365-holidays)*63)+(holidays*127);
	minutes=30000-minutes;


	total_hour=(minutes)/60;
	total_minute=minutes%60;
	
		if((minutes)>=0)
		{
			cout<<"Tom sleeps well"<<endl;
			cout<<total_hour<<" hours and "<<total_minute<< " minutes less for play";
			 
		}

		if((minutes)<0)
		{	
			total_hour=total_hour*(-1);
			total_minute=total_minute*(-1);
			cout<<"Tom will run away"<<endl;
			cout<<total_hour<<" hours and "<<total_minute<< " minutes for play";
		}
}





