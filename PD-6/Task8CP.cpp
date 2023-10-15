#include<iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownweekends);
/*Vladimir is a student, who lives in Sofia, and goes to his hometown from time to time. He
is very keen on volleyball, but is busy during weekdays and plays volleyball only during
weekends and on holidays. Vladimir plays in Sofia every Saturday when he is not
working, and he is not traveling to his hometown, and also during 2/3 of the holidays.
He travels to his hometown h times a year, where he plays volleyball with his old friends
on Sunday. Vladimir is not working 3/4 of the weekends, during which he is in Sofia.
Furthermore, during leap years Vladimir plays 15% more volleyball than usual. We
accept that the year has exactly 48 weekends, suitable for volleyball. Write a program
that calculates how many times Vladimir has played volleyball throughout the year.
Round the result down to the nearest whole number (e.g. 2.15 -> 2 || 9.95 -> 9).
The input data is read from the console:*/

main()
{
    string yearType;    // variable daclaration
    int holidays;
    int hometownweekends;

    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownweekends;


    cout<<calculateVolleyballGames(yearType,holidays,hometownweekends); //calling and  printing


}
int calculateVolleyballGames(string yearType, int holidays, int hometownweekends)
{
    float during_sofia;
    float weekends;
    float during_holidays;
    float result; 


    if (yearType == "normal")
    {

    during_holidays = (holidays)*(0.666);   // 2/3 = 0.666 2/3 was not giving expected output


    during_sofia = 48 - hometownweekends;
    weekends = (during_sofia)*(0.75);       // 2/3 = 0.666 2/3 was not giving expected output



    result = weekends + during_holidays + hometownweekends;

    }




    if (yearType == "leap")
    {

    during_holidays = (holidays)*(0.666);   // 2/3 = 0.666 2/3 was not giving expected output

    during_sofia = 48 - hometownweekends;
    weekends = (during_sofia)*(0.75);       // 2/3 = 0.666 2/3 was not giving expected output




    result = weekends + during_holidays + hometownweekends;

    result = result + (result*15)/(100);

    }
            
            return result;    //returning the value

}