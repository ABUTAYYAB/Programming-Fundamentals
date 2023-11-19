#include<iostream>
using namespace std;

int words_Count(string words[],int size, char letter);
/*Declare a String array and take input from the user.
Suppose the user has entered the following data in the array.
{"programming", "is", "my", "life", "now"}
Now, ask the user to Enter a letter.
Suppose the user has entered the letter “o”.
Now your task is to count the number of times a particular letter shows up in the array
search.*/
int check_Presence(string word, char letter);
/*for checking letter in indivual word*/

main()
{

    int size;       //variable daclaration
    char letter;

    cout<<"Enter how many words you want to enter: ";
    cin>>size;

    string words[size];     //array daclaration

    for(int index = 0; index < size; index++)
    {
        cout<<"Enter word "<<index+1<<": ";
        cin>>words[index];
    }

    cout<<"Enter the letter you want to count: ";
    cin>>letter;

    cout<<letter<<" shows up "<<words_Count(words, size,letter)<<" times in the data.";     //calling the function and printing on screen

}
int words_Count(string words[],int size, char letter)       //function defination
{

    string word;        //variable daclaration
    int count;          

    count = 0;          //initialization
     

    for(int index = 0;index < size; index++)
    {
        word = words[index];
        count += check_Presence(word,letter);
            

    }
    
    return count;       //returning the value
}
int check_Presence(string word, char letter)        //function defination
{

    int length;         //variable daclaration
    int count;

    length = word.length();
    count = 0;      //initialization


    for(int index = 0; index < length; index++)
    {
        if(word[index] == letter)
        {
            count++;
        }
    }

    return count;       //returning the value

}
