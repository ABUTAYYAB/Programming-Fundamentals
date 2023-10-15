#include<iostream>
using namespace std;

float Cellularr_company(char service_code , char time , int minutes );
/*Write a program that calculates and prints the bill for a cellular telephone company. The
company offers two types of service: regular and premium. Its rates vary, depending on
the type of service. The rates are computed as follows:
Regular service: $10.00 plus the first 50 minutes are free. Charges for over 50 minutes
are $0.20 per minute.
Premium service: $25.00 plus:For calls made during the day., the first 75 minutes are free; charges for more than
75 minutes are $0.10 per minute.
● For calls made during the night, the first 100 minutes are free; charges for more
than 100 minutes are $0.05 per minute.
Your program should prompt the user to enter a service code (type char), and the
number of minutes the service was used.*/

string Type(char service_code);
/*to check the service code*/


main()
{
    char service_code;      //variable daclaration
    char time;
    int minutes;
    string type;


    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>service_code;


    if(service_code == 'p' || service_code == 'P')  //condition because time will only entered when premium
    {
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>time;
    }


    cout<<"Enter the number of minutes used: ";
    cin>>minutes;

    type =Type(service_code);     //calling

    cout<<"Service Type: "<<type<<endl;
    cout<<"Total Minutes Used: "<<minutes<<" minutes"<<endl;
    cout<<"Amount Due: $"<<Cellularr_company(service_code,time,minutes);  //calling


}

float Cellularr_company(char service_code , char time , int minutes)        //function defination
{
    float result = 0;
        if(service_code == 'r' || service_code == 'R')
        {
            if(minutes<=50)
            {
                result = 10.00;
                
            } 
            else
            {
               result = minutes-50;
               result = 10 + result*0.20;
               
                
            }
                    return result;
        }

        if(service_code == 'p' || service_code == 'P' )
        {
            if(minutes<=75 && (time == 'd' || time == 'D'))
            {
                result =  25;
            } 
            else if(minutes>75 && (time == 'd' || time == 'D'))
            {
               result = minutes-75;
               result = 25 + (result*0.10);
                
            }

            if(minutes<=100 && (time == 'N' || time == 'n'))
            {
                result =  25.00;
            } 
            else if(minutes>100 && (time == 'n' || time == 'N'))
            {
               result = minutes-100;
               result = 25 +( result*0.05);
                
            }
                    return result;
        }


}
string Type(char service_code)      //function defination
{
    if(service_code == 'r' || service_code == 'R' )
    {
        return "Regular";
    }

    else if(service_code == 'p' || service_code == 'P' )
    {
        return "Premium";
    }
    
    else
    {
        return "error";
    }
}