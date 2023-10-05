#include <iostream>
using namespace std;

void CalculatePoolState(int Volume, int Pipe1, int pipe2, float Hour);	//this function will calculate the current pool state after worker's break 

main()
{
 	int Volume; 	//variable daclaration
	int Pipe1;
	int pipe2;
    	float Hour;

    	cout << "Enter volume of the pool in liters: ";		//data input
    	cin >> Volume;
    	cout << "Enter flow rate of the first pipe per hour: ";
   	cin >> Pipe1;
    	cout << "Enter flow rate of the second pipe per hour: ";
    	cin >> pipe2;
    	cout << "Enter hours that the worker is absent: ";
    	cin >> Hour;

    	CalculatePoolState(Volume, Pipe1, pipe2, Hour);		//function calling
}

void CalculatePoolState(int Volume, int Pipe1, int pipe2, float Hour)		//function header
{
    	float totalflowthroughP = Pipe1 + pipe2;
    	float totalWaterFlow = totalflowthroughP * Hour;


    	if (totalWaterFlow >= Volume)
    	{
       		float overFlowWater = totalWaterFlow - Volume;
        	cout << "For " << Hour << " hours, the pool overflows with " << overFlowWater << " liters.";
    	}

   	 if (totalWaterFlow < Volume)
    	{

        	float poolPercentage = totalWaterFlow / Volume * 100;
        	int pipe1Percentage = Pipe1 / totalflowthroughP * 100;
        	int pipe2Percentage = pipe2 / totalflowthroughP * 100;
        	cout << "The pool is " << poolPercentage << "% full."<< " Pipe 1: " << pipe1Percentage << "%."<< " Pipe 2: " << pipe2Percentage << "%.";
   	 }
}