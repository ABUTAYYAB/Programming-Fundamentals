#include <iostream>
using namespace std;

string contain_Seven(int numbers[] , int size);
/*Write a program that takes an array of numbers as input from the user and then prints
"Boom!" if the digit 7 appears in the array. Otherwise, print "there is no 7 in the array".*/

main()
{
    int size;       //variable daclaration

    cout<<"Enter the size of Array: ";
    cin>>size;

    int numbers[size-1];  //array daclaration


    for(int index = 0; index < size; index++)
    {

        cout<<"Enter Element "<<index+1<<": ";
        cin>>numbers[index];

    }


    cout<<contain_Seven(numbers ,size);     //function calling and printing on screen

}
string contain_Seven(int numbers[] , int size)      //function defination
{

    string result;          //variable daclaration
    int loop;
    int mod;
    int num;

    result = "there is no 7 in the array";
    loop =  0;

    while(numbers[loop] != '\0')
    {

        mod = numbers[loop]%10;
        num = numbers[loop]/10;

        if(mod == 7 || num == 7)
        {

            result = "Boom!";
            break;

        }

        loop++;

    }

    return result;          //returning the value

    
}