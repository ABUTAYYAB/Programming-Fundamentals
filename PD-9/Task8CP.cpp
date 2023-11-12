#include <iostream>
using namespace std;

string find_Broken_Keys(string sentence_One, string sentence_Two);
/*Given what is supposed to be typed and what is actually typed, write a function that
returns the broken key(s). The function looks like:
findBrokenKeys(correct phrase, what you actually typed)*/

main()
{
    string sentence_One;            //variable daclaration
    string sentence_Two;

    cout<<"Enter the correct phrase: ";
    getline(cin, sentence_One);

    cout<<"Enter what you actually typed: ";
    getline(cin, sentence_Two);


    cout<<"Broken keys: ";

    cout<<find_Broken_Keys(sentence_One, sentence_Two);      //function calling and printing


}
string find_Broken_Keys(string sentence_One, string sentence_Two)       //function defination 
{


    int length_Sentence_One;        //variable daclaration
    string result;

    length_Sentence_One = sentence_One.length();
    result = "";

    for (int loop1 = 0; loop1 < length_Sentence_One; loop1++)
    {
    
        if(loop1==0)
        {
            if(sentence_One[loop1] != sentence_Two[loop1])
            {
                result += sentence_One[loop1];

            }
        }
        else
        {
            if(sentence_One[loop1] != sentence_Two[loop1])
            {

                for (int loop2 = loop1-1; loop2 >= 0; loop2--)
                {

                    if(sentence_One[loop1] == sentence_One[loop2])
                    {

                        if(sentence_One[loop2] != sentence_Two[loop2])
                        {
                            
                            break;

                        }

                    }                
                    if(loop2==0)            //it will run only when break donot run and it will run at last to add word to string
                    {

                        result += sentence_One[loop1];

                    }

                }
            
            }

        }
    }

    return result;      //returning the value

}