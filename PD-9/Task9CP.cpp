#include <iostream>
using namespace std;


bool words_Can_Print(string string_word);
/*it will check that k, m, v, w and x. are present or not if present then it will return false*/
string best_Word(string segment7_words[], int size);
/*return the longest word which can fit on a 7 segment display.*/

main()
{

    int size;       //variable daclaration 

    cout<<"Enter the number of words: ";
    cin>>size;
    cout<<"Enter the words, one by one: "<<endl;


    string segment7_words[size];        //array daclaration 


    for (int index = 0; index < size; index++)
    {

        cin>>segment7_words[index];

    }


    cout<<"Longest 7-segment word: ";
    cout<<best_Word(segment7_words, size);      //function calling and printing on screen

}
bool words_Can_Print(string string_word)        //function defination
{
    bool result;
    int length;

    result = true;
    length = string_word.length();

    for (int loop = 0; loop < length; loop++)
    {

        if (string_word[loop] == 'k')
        {
            result = false;
        }
        else if(string_word[loop] == 'm')
        {
            result = false;
        }
        else if(string_word[loop] == 'v')
        {
            result = false;
        }
        else if(string_word[loop] == 'w')
        {
            result = false;
        }
        else if(string_word[loop] == 'x')
        {
            result = false;
        }

    }


    return result;      //returning the value

}

string best_Word(string segment7_words[], int size)     //function defination
{

    string result;

    result = "";

    for (int loop = 0; loop < size; loop++)
    {

        if(words_Can_Print(segment7_words[loop]))
        {
            if(segment7_words[loop].length() > result.length())
            {
                result = segment7_words[loop];
            }
        }

        
    }
    
    return result;          //returning the value

    
}
