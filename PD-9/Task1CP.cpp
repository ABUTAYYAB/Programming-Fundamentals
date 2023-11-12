#include <iostream>
using namespace std;

bool is_Length_Even(string word);
/*C++ function named isLengthEven that is given a string as input, it returns true if
its length is even and false if the length is odd.*/

main()
{

    string word;    //string array daclaration


    cout<<"Enter a String: ";
    cin>>word;

    cout<<is_Length_Even(word);     //function calling and printing on screen

}
bool is_Length_Even(string word)            //function defination
{
    int index;            //for loop
    int count;            //for counting the letters in array

    index = 0;
    count = 0;

    while(word[index] != '\0')
    {

        count++;
        index++;
    }

    if(count%2==0)
    {

        return 1;       //returning the value
    }
    else
    {

        return 0;          //returning the value

    }
}