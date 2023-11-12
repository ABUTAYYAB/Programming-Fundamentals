#include <iostream>
using namespace std;


int common_Characters(string word_1, string word_2);
/*A C++ function that is Given two strings, find the number of common characters
between them and then return that count.*/

main()
{
 
    string word_1;        //array daclaration
    string word_2;

    cout<<"Enter the first string: ";
    getline(cin, word_1);

    cout<<"Enter the second string: ";
    getline(cin, word_2);



    cout<<"Number of common characters: "<<common_Characters(word_1, word_2);       //function calling and printing on screen


}
int common_Characters(string word_1, string word_2)     //function defination
{

    int count;          //variable daclaration
    int length1;
    int length2;

    length1 = word_1.length();
    length2 = word_2.length();
    count = 0;
    

    for(int loop1 = 0; loop1 < length1; loop1++)
    {

        for(int loop2 = 0; loop2 < length2; loop2++)
        {

            if(word_1[loop1+count]==word_2[loop2])
            {

                count++;

            }

        }

    }


    return count;       //returning the value

    
}