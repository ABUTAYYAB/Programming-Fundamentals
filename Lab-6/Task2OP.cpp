#include<iostream>
using namespace std;


bool parity_analysis(int num);  //  it will tell if all the digits sum and the num entered if same means either even or odd

main()      //main body
{
    int num;   //variable daclaration

    cout<<"Enter a 3-digit number: ";
    cin>>num;

    cout<<parity_analysis(num);   //function calling and printing on the screen

}
bool parity_analysis(int num)     //function defination
{
    int number = num;   // variable daclaration
    int real_num;
    int num1;
    int num2;
    int num3;
    int mod1;
    int mod2;
    int mod3;

    mod1 = num%10;    
    num1 = num/10;
    mod2 = num1%10;
    num2 = num1/10;
    mod3 = num2%10;
    num3 = num2/10;

    real_num = mod1 + mod2 + mod3;

    if(real_num % 2 == 0 && num %2 ==0)
    {
       return 1;
    }
    
    if(real_num % 2 != 0 && num %2 !=0)
    {
       return 0;
    }
}

