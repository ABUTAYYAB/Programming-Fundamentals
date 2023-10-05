#include <iostream>
using namespace std;

char Check_alphabet_case(char letter); // this function will tell weather the letter is capital or small

main()
{
   	char letter;	//variable daclaration
	char result;

	cout<<"Enter a character (A/a): ";
	cin>>letter;

	result = Check_alphabet_case(letter);	//calling
	
	
	if(result == 'a')	 // condition for checking the return value
	{
		cout<<"You have entered small "<<letter;
	}
	
	if(result == 'A')
	{
		cout<<"You have entered Capital "<<letter;
	}
}

char Check_alphabet_case(char letter) //header
{
	if(letter=='a')
	{
		return 'a';
	}
	
	if(letter=='A')
	{
		return 'A';
	}

}
