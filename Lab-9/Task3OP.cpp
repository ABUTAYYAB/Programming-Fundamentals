#include<iostream>
using namespace std;

void shifted_String(string String_);
/*Write a C++ function to change every letter in a given string with the letter following it in
the alphabet (ie. a becomes b, p becomes q, z becomes a).
For Example:
Input: aslam
Output: btmbn*/
main()
{

    string String_;     //array daclaration

    cout << "Enter a String: ";
    getline(cin,String_);       //to get all data even spaces

    shifted_String(String_);        // function calling
}
void shifted_String(string String_)     //function defination
{
    int index;
    int new_Index;
    index = 0;
    new_Index = 0;


    cout<<"Shifted String: ";


    while(String_[index] != '\0')
    {
    if((String_[index]>=65 && String_[index] <90) || (String_[index]>= 97 && String_[index] <122))
    {
        new_Index = String_[index]+1;
        cout<<char(new_Index);
    }
    else if(String_[index] == 32)
    {
        new_Index = 32;
        cout<<char(new_Index);
    }
    else if(String_[index] == 90)
    {
        new_Index = 65;
        cout<<char(new_Index);
    }
    else if(String_[index] == 122)
    {
        new_Index = 97;
        cout<<char(new_Index);
    }


    index++;
    }
    

}