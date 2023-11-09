#include<iostream>
using namespace std;

void word_Postmortem(string word);
/*Write a program that takes a word from the user and stores it in a character array and
passes it to a function that displays the location of all alphabets in the array.*/

main()
{

    string word;     //array daclaration

    cout << "Enter a word: ";
    cin >> word;

    word_Postmortem(word);  // function calling

}
void word_Postmortem(string word)      //function defination
{

    for(int i = 0 ; word[i] != '\0' ; i++)
    {
        cout<<word[i]<<" found at position "<<i<<endl;
    }
    
    
}
