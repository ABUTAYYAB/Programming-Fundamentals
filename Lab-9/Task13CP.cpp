#include <iostream>
using namespace std;


void jazzify_Chords(string chord[], int num_Chords);
/*Create a function which concatenates the number 7 to the end of every chord in an array.
Ignore all chords which already end with 7.*/

main()
{

    int num_Chords;     //variable daclaration



    cout<<"Enter the number of chords: ";
    cin>>num_Chords;

    string chord[num_Chords];       //array daclaration


    cout<<"Enter "<<num_Chords<<" chords, one per line: "<<endl;

    for(int loop = 0; loop < num_Chords; loop++)
    {

        cin>>chord[loop];

    }


    cout<<"Jazzified chords: [";
    jazzify_Chords(chord,num_Chords);       //function calling




}
void jazzify_Chords(string chord[], int num_Chords)     //function defination
{
    int lenght;
    string letter;


    for(int loop = 0; loop < num_Chords; loop++)
    {
        letter = chord[loop];
        lenght = letter.length();

        if(letter[lenght-1] != '7')
        {
            chord[loop] += '7';
        }
    }




    for(int loop = 0; loop < num_Chords ; loop++)
    {
        if(loop != num_Chords-1)
        {
            cout<<chord[loop]<<", ";
        }
        else
        {
            cout<<chord[loop]<<"]";
        }
    }


}