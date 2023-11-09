#include <iostream>
using namespace std;


void vowels_Removed(string sentence);
/*Create a program that takes a string and returns a new string with all vowels removed.
Test Cases:
Input:
"I have never seen a thin person drinking Diet Coke."
Output:
" hv nvr sn thn prsn drnkng Dt Ck."*/

main()
{

    string sentence;        //array daclaration

    cout<<"Enter a string: ";
    getline(cin,sentence);


    

    vowels_Removed(sentence);        //function calling


}
void vowels_Removed(string sentence)          //function defination
{
    int index;

    index = 0;

    cout<<"String with vowels removed: ";


    while(sentence[index] != '\0')
    {
        if(sentence[index] == 65 || sentence[index] == 69 || sentence[index] == 73 || sentence[index] == 79 || sentence[index] == 85 || sentence[index] == 97 || sentence[index] == 101 || sentence[index] == 105 || sentence[index] == 111 || sentence[index] == 117)
        {
            
            cout<<char(32);

        }
        else
        {
            cout<<sentence[index];
        }

        index++;
    }


}
