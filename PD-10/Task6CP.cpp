#include<iostream>
using namespace std;

void reverse_Words(string sentence);
/*Given an input string, reverse the string word by word, the first word will
be the last, and so on.
Test Cases:
reverseWords("the sky is blue") ➞ "blue is sky the"
reverseWords("hello world!") ➞ "world! hello"
reverseWords("a good example") ➞ "example good a"*/
void print_Reverse_String(string sentence[], int loop);
/*printing the array on screen*/


main()
{
    string sentence;             //variable daclaration

    cout<<"Enter a string: ";
    getline(cin,sentence);

    reverse_Words(sentence);        //calling the function

}
void reverse_Words(string sentence)     //function defination
{

    string word;        //variable daclaration
    int count;
    int length;
    string words[1000];     //array daclaration

    count = 0;          //initialization
    length = sentence.length();

    for (int index = 0; index <= length; index++)
    {

        if (sentence[index] == ' ' || sentence[index] == '\0')
        {

            words[count] = word;
            word = "";

            count++;
            continue;

        }


        word += sentence[index];

        
    }


    print_Reverse_String(words,count);      //calling the function
    

}
void print_Reverse_String(string sentence[], int loop)      //function defination
{

    cout << "Reversed string: ";


    for (int index = loop; index >= 0; index--)
    {

        if (index != 0)
        {

            cout<<sentence[index]<< " ";

        }
        else
        {
            cout<<sentence[index];

        }

    }
}