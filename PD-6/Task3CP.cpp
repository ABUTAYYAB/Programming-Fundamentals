#include<iostream>
using namespace std;

string Find_zodaic_Sign(int day , string month);
/*Write a Program to display an Astrological sign or a Zodiac sign for a given date of birth.*/

main()
{

    int day;         //variable daclaration
    string month;

    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;

    cout<<"Zodiac Sign: "<<Find_zodaic_Sign(day ,month); //function calling and printing

}

string Find_zodaic_Sign(int day , string month) // function defination
{
        string Sign;
         
         if(month == "March" && (day >= 21 && day <= 30))
         {
            Sign = "Aries";
         }

         else if(month == "April" && (day <=19 && day >= 1))
         {
            Sign = "Aries";
         }

         else if(month == "April" && (day >= 20 && day <= 30))
         {
            Sign = "Taurus";
         }

         else if(month == "May" && (day >= 1  && day <= 20))
         {
            Sign = "Taurus";

         }

        else if(month == "May" && (day >=21 && day <= 30))
         {
            Sign = "Gemini";
            
         }

         if(month == "June" && (day >= 1 && day <= 20))
         {
            Sign = "Gemini";

         }

         else if(month == "July" && (day >21 && day >= 1))
         {
            Sign = "Cancer";
            
         }

         else if(month == "June" && (day >= 1 && day <= 21))
         {
            Sign = "Cancer";

         }

         else if(month == "July" && (day >=22 && day <= 30))
         {
            Sign = "Leo";
            
         }

         else if(month == " August" && (day >= 1 && day <= 22))
         {
            Sign = "Leo";

         }

         if(month == "September" && (day >= 1 && day <=22))
         {
            Sign = "Virgo";
            
         }

         else if(month == " August" && (day >= 23 && day <= 30))
         {
            Sign = "Virgo";

         }

          else if(month == "September" && (day >=23 && day <=30))
         {
            Sign = "Libra";
            
         }

         else if(month == "October" && (day >= 1 && day <= 22))
         {
            Sign = "Libra";

         }

          else if(month == "October" && (day >=23 && day <=30))
         {
            Sign = "Scorpio";
            
         }

         if(month == "November" && (day >= 1 && day <= 21))
         {
            Sign = "Scorpio";

         }

           
          else if(month == "November" && (day >=22 && day <=30))
         {
            Sign = "Sagittarius";
            
         }

         else if(month == "December" && (day >= 1 && day <= 21))
         {
            Sign = "Sagittarius";

         }

         else if(month == "December" && (day >=22 && day <=30))
         {
            Sign = "Capricorn";
            
         }

         else if(month == "January" && (day >= 1 && day <= 19))
         {
            Sign = "Capricorn";

         }

         else if(month == "January" && (day >=20 && day <=30))
         {
            Sign = "Aquarius";
            
         }

         else if(month == "February" && (day >= 1 && day <= 18))
         {
            Sign = "Aquarius";

         }

         else if(month == "February" && (day >=19 && day <=30))
         {
            Sign = "Pisces";
            
         }

         else if(month == "March" && (day >= 1 && day <= 20))
         {
            Sign = "Pisces";

         }

               return Sign;      //returning the value
 


}