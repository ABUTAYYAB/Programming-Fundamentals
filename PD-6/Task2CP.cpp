#include<iostream>
using namespace std;

string Calculate_grade(float percentage);
/*Jack is a teacher who needs a program that helps him to compile 8th class results. He has
five subjects (English, Maths, Chemistry, Social Science, and Biology) marked in detail.
Program asks the user to enter five subjects' marks, including student name and displays
the total marks, percentage, grade (by percentage), and student name. Every subject has a
total of 100 marks.*/

float Percentage(int eng_marks,int math_marks,int che_marks,int social_science_marks,int bio_marks);
/*it will calculate the percentage of marks*/


main()
{
    string name;    //variable daclaration
    int eng_marks;
    int math_marks;
    int che_marks;
    int social_science_marks;
    int bio_marks;
    float percentage;
    

    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng_marks;
    cout<<"Enter marks for Maths: ";
    cin>>math_marks;
    cout<<"Enter marks for Chemistry: ";
    cin>>che_marks;
    cout<<"Enter marks for Social Science: ";
    cin>>social_science_marks;
    cout<<"Enter marks for Biology: ";
    cin>>bio_marks;
    

    percentage = Percentage( eng_marks, math_marks, che_marks, social_science_marks, bio_marks);        //function calling

    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<Calculate_grade(percentage)<<endl; //calling other function
    
    

}
string Calculate_grade(float percentage)        //function defination
{
    string grade;

    if(percentage < 40)
    {
        grade =  "F";
    }

    else if (percentage >= 40  && percentage <50)
    {
        grade = "D";
    }

    else if (percentage >= 50  && percentage <60)
    {
        grade = "C"; 
    }

    else if (percentage >= 60  && percentage <70)
    {
        grade = "B";
    }

    else if (percentage >= 70  && percentage <80)
    {
        grade = "B+";
    }

    else if (percentage >= 80  && percentage <90)
    {
        grade = "A";
    }

    else if (percentage >= 90  && percentage <100)
    {
        grade =  "A+";
    }

        return grade;

}

float Percentage(int eng_marks,int math_marks,int che_marks,int social_science_marks,int bio_marks)     //function defination
{
    float percentage;
    
    percentage = eng_marks + math_marks+che_marks+ social_science_marks+ bio_marks;
    percentage = (percentage/500)*100;

    return  percentage;
}

