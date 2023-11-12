#include <iostream>
#include <cctype>
using namespace std;


void convert_PinTo_Dance(string password);
/*Your local bank has decided to upgrade its ATM machines by incorporating motion
sensor technology. The machines now interpret a series of consecutive dance moves in
place of a PIN number.
Create a program that converts a customer's PIN number to its dance equivalent. There is
one dance move per digit in the PIN number. A list of dance moves is given below.
MOVES = ["Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"];*/

int main()
{

    string password;        //array daclaration 


    cout<<"Enter your PIN (4 digits): ";
    cin>>password;


    if (password.length() != 4)
    {
        cout<<"Invalid input.";
        return 0;
    }
    else if(!(isdigit(password[0])))
    {
        cout<<"Invalid input.";
        return 0;
    }
    else if(!(isdigit(password[1])))
    {
        cout<<"Invalid input.";
        return 0;
    }
    else if(!(isdigit(password[2])))
    {
        cout<<"Invalid input.";
        return 0;
    }
    else if(!(isdigit(password[3])))
    {
        cout<<"Invalid input.";
        return 0;
    }


    convert_PinTo_Dance(password);      //function calling
    

}
void convert_PinTo_Dance(string password)           //function defination  
{

    string dance_Moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};


    for (int loop = 0; loop<4; loop++)
    {

        int index;          //variable daclaration 
        int actual_digit;
        

        actual_digit = password[loop]-'0';
        index = (actual_digit + loop)%10;
        

        if (loop == 3)
        {

            cout<<dance_Moves[index];

        }
        else
        {

            cout<<dance_Moves[index]<< ", ";

        }

    }

}