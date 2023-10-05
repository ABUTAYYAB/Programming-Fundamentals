#include <iostream>
using namespace std;

void TimeTravel(int hr, int min, int* hour, int* minute); //it will calculate the time in future and return in hour:minute format


int main()
{
    	int hr;			//variable daclaration
    	int min;
    	int hour = 0;		
    	int minute = 0; 

    	cout << "Enter Hours: ";
    	cin >> hr;
    	cout << "Enter Minutes: ";
    	cin >> min;

    	TimeTravel(hr, min, &hour, &minute);		//function calling
    	cout<< hour << ":" << minute << endl;
	return 0;
   
}

void TimeTravel(int hr, int min, int* hour, int* minute)	//function header
{
    	min += 15;
   	if (min > 59)
    	{
        hr += 1;
        min -= 60;
    	}

    	if (hr > 23)
    	{
        hr = 0;
    	}

    	*hour = hr; 		// it will store the value of hour
    	*minute = min;		// it will store the value of minute
}
