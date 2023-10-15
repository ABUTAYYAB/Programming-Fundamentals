#include<iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
/*A student has to attend an exam at a particular time (for example, at 9:30 am). They
arrive in the exam room at a particular time of arrival (for example 9:40 am). It is
considered that the student has arrived on time if they have arrived at the time when the
exam starts or up to half an hour earlier. If the student has arrived more than 30 minutes
earlier, the student has come too early. If they have arrived after the time when the exam
starts, they are late.*/

main()       //main body
{
    int examHour;       //variable daclaration
    int examMinute;
    int studentHour;
    int studentMinute;

    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentHour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentMinute;

    cout<<checkStudentStatus(examHour,examMinute,studentHour,studentMinute);     //function calling and printing
   

   
    

}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) //function defination
{
    int result;      //variable daclaration
    int exam;
    int student;
    int minutes;
    int hour;

    string result_ans;

    exam = (examHour*60) + examMinute;      //to convert into minutes
    student = (studentHour*60) + studentMinute;     //to convert into minutes

    result = exam-student;     
    minutes = result;

    if(result > 30)
    {
        minutes = result;

        result_ans ="Early""\n"+to_string(minutes) + " minutes before the start";

        if(result >= 60)
        {
            hour = result/60;
            minutes = result%60;

            result_ans ="Early""\n" + to_string(hour) + ":" + to_string(minutes) + " hours before the start";


        }
    }
    else if(result >= 0 && result <=30)
    {
        result_ans = "On time";

        if(result > 0 )
        {
        result_ans ="On time""\n"+ to_string(minutes) + " minutes before the start";
        }

    
    }
    else if(result < 0)
    {
        result = -1*(result);
        minutes = result;

        result_ans ="Late""\n" + to_string(minutes) + " minutes after the start";

        if(result >= 60)
        {
            hour = result/60;
            minutes = result%60;

            result_ans ="Late""\n" + to_string(hour) + ":"+to_string(minutes) + " hours after the start";


        }
    } 

            return result_ans;      //returning the value




}
 