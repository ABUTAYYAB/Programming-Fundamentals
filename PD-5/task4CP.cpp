#include<iostream>
using namespace std;

string Project_time_calculation(int hours, int days, int workers);    // a function that can calculte that how much time needed to the work in time

main()        // main body of the function
{
    int hours;  //variable dacrlaration
    int days;
    int workers;
    string result;

    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of the workers: ";
    cin>>workers;
     
    result = Project_time_calculation( hours, days, workers);
    cout<<result;
}
string Project_time_calculation(int hours, int days, int workers)  // function defination
{
    int result;
    int hour_needed;
    hour_needed = days*9;     //multiple by 9 because 10% is lost in training
    result =  hour_needed*workers;
    if(hours <= result)
    {
        return "yes!"+ to_string(result-hours) + " hours left.";
    }

        if(hours > result)
    {
        return "Not enough time! "+ to_string(-1*(result-hours)) + " hours needed.";
    }
}