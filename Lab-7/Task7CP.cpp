#include<iostream>
using namespace std;
#include<iomanip>           // because we are using  precision() and fixed


void percentage(int num);
/*We have n integer numbers within the range of [1 ... 1000]. Some percent of p1 are under
200, another percent p2 are from 200 to 399, percent p3 are from 400 to 599, percent p4
are from 600 to 799 and the rest p5 percent are from 800 upwards. Write a program that
calculates and prints the percentages p1, p2, p3, p4 and p5.*/

main()
{
    int num;         //variable daclaration

    cout<<"Enter numbers count: ";
    cin>>num;


    percentage(num);         //function calling 

    

}
void percentage(int num)        //function defination
{


    float number = 0.0;        //variable daclaration and initalization
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float num4 = 0.0;
    float num5 = 0.0;
    float percentage_num1 = 0.0;
    float percentage_num2 = 0.0;
    float percentage_num3 = 0.0;
    float percentage_num4 = 0.0;
    float percentage_num5 = 0.0;



    for(int iteration = 1 ; iteration <= num ; iteration++)
    {


        cout<<"Enter a number: ";
        cin>>number;


        if(number < 200)
        {
            num1++;
        }

        else if(number >= 200 && number < 400)
        {
            num2++;
        }

        else if(number >= 400 && number < 600)
        {
            num3++;
        }

        else if(number >= 600 && number < 800)
        {
            num4++;
        }

        else if(number >= 800)
        {
            num5++;
        }



    }


    percentage_num1 = (num1/num)*100.0;        //calculating the %

    percentage_num2 = (num2/num)*100.0;
    
    percentage_num3 = (num3/num)*100.0;

    percentage_num4 = (num4/num)*100.0;

    percentage_num5 = (num5/num)*100.0;

    

    cout<<fixed;                                 //output printing
    cout<<setprecision(2);
    cout<<percentage_num1<<"%"<<endl;


    cout<<fixed;
    cout<<setprecision(2);
    cout<<percentage_num2<<"%"<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<percentage_num3<<"%"<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<percentage_num4<<"%"<<endl;

    cout<<fixed;
    cout<<setprecision(2);
    cout<<percentage_num5<<"%"<<endl;
        
        




}

