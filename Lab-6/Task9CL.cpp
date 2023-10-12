#include<iostream>
using namespace std;

string Check_title(int age , char gender);
 
/*“Mr.” – a man (gender “m”) – 16 or more years old.
● “Master” – a boy (gender “m”) under 16 years.
● “Ms.” – a woman (gender “f”) – 16 or more years old.
● “Miss” – a girl (gender “f”) under 16 years.*/

main()        //main body
{
    int age;        //variable daclaration
    char gender;

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;

    cout<<"Your personal title is: "<<Check_title(age , gender);    //calling function and printing output on screen

}

string Check_title(int age , char gender)   // function defination
{
    string title;

    if(age>=16 && gender == 'm' )
    {
        title = "Mr.";
    }

    if(age<16 && gender == 'm' )
    {
        title = "Master";
    }

    if(age>=16 && gender == 'f' )
    {
        title = "Ms.";
    }

    if(age<16 && gender == 'f' )
    {
        title = "Miss";
    }

        return title;
}
