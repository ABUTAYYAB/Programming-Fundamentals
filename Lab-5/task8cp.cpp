#include <iostream>
using namespace std;

string OddishOrEvenish(int num); //tell weather the sum of numbers is even or odd

main()
{ 
	int num;	//variable daclaration


	cout<<"Enter a five-digit number: ";
	cin>>num;


    	OddishOrEvenish(num);	//calling
	
    	string result = OddishOrEvenish(num);
   	cout<<result;
}
string OddishOrEvenish(int num)		//header
{

	int mod1;	//variable daclaration
	int mod2;
	int mod3;
	int mod4;
	int mod5;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	mod1 = num%10;

	num1 = num/10;

	
	mod2 = num1 % 10;


	num2 = num1/10;


	mod3 = num2%10;

	
	num3 = num2/10;

	
	mod4 = num3%10;

        num4 = num3/10;

    
        mod5 = num4%10;

   	num5 = mod5 + mod4 + mod3 + mod2 + mod1;

	if(num5%2 == 1)
	{
        	return "Oddish";
    	}

	if(num5%2 == 0)
	{
        return "Evenish";
    	}
}
		
	
