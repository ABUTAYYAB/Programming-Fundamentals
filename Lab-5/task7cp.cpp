#include <iostream>
using namespace std;

string IsSymmetrical(int num); 	//it wil tell that the number we entered is symmetrical or not
main()
{
    	int num;	//variable daclaration

   	cout << "Enter a three-digit number: ";
    	cin >> num;

    	IsSymmetrical(num);	//calling

    	string result = IsSymmetrical(num);
    	cout << result;
}
string IsSymmetrical(int num)
{
    	int num0 = num % 10;
    	int num1 = num / 100;

    	if (num0 == num1)
    	{
        return "The number is symmetrical.";
    	}

    	if (num0 != num1)
    	{
        return "The number is not symmetrical.";
    	}
}