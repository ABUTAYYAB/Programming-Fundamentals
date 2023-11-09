#include<iostream>
using namespace std;

string Reverse_Word(string word);
/*Write a function that takes a string as input parameter and displays it in reverse order.*/

main()
{
    string word;        //array daclaration

    cout << "Enter a string: ";
    cin >> word;

            

    cout << "Reversed String: " <<Reverse_Word(word)<< endl;        // function calling


    
}

string Reverse_Word(string word)        //function defination
{
    int index;
    string result;

    index = word.length();          // it will tell the total indexes of array

    for(int i = index - 1; i >= 0; i--)
    {

        result += word[i];

    }


    return result;      //returning the value
}
