#include<iostream>
#include<windows.h>
#include<conio.h> // because we want to use getch function
using namespace std;

void Print_header();       // it will print the company name and the options we have


int option_selector();    // it will decide which things user wants to  do




main()      //main body of program starts from here
{
    
    
    
    option_selector();     // calling the function
    
   
}

void Print_header()          //company header
{

    cout<<"#########################################################################"<<endl;
    cout<<"#                                                                       #"<<endl;
    cout<<"#                             ****       ****                           #"<<endl;
    cout<<"#                             **  **     **  **                         #"<<endl;
    cout<<"#                             **   **    **   **                        #"<<endl;
    cout<<"#                             **  **     **  **                         #"<<endl;
    cout<<"#                             ****       ****                           #"<<endl;
    cout<<"#                                                                       #"<<endl;
    cout<<"#------------------------------DAIRY - DELIGHTS-------------------------#"<<endl;
    cout<<"#                                                                       #"<<endl;
    cout<<"#########################################################################"<<endl;
    cout<<endl;

}
int option_selector()        //it will display the options and then do what user want to do
{ 


    float firstProductPrice = 0;              //variable daclaration
    float secondProductPrice = 0;
    float thirdProductPrice = 0;
    float total = 0;
while(true)                  // because of this it will keep asking the user then user want to terminate it
    {
        system("cls");

    Print_header();    // COMPANY NAME

    int option;

    cout<<"what would you like to do sir ?"<<endl;
    cout<<"1 add first product data"<<endl;
    cout<<"2 add Second product data"<<endl;
    cout<<"3 add third product data"<<endl;
    cout<<"4 Calculate total"<<endl;
    cout<<"5 view all products data"<<endl;
    cout<<"6 exit"<<endl;
    cout<<"NOTICE : \nIN ORDER TO CALCULATE TOTAL OR VIEW ALL PRODUCTS FIRST ENTER DATA ABOUT PRODUCTS IN OPTION 1,2 AND 3"<<endl;
    cin>>option;
    cout<<"You have entered option number: "<<option<<endl;

        if (option == 1)
        {
            cout << "Enter price for first product: $";
            cin >> firstProductPrice;
           
        }
        if (option == 2)
        {
            cout << "Enter price for second product: $";
            cin >> secondProductPrice;
         
        }
        if (option == 3)
        {
            cout << "Enter price for third product: $";
            cin >> thirdProductPrice;
        
        }
        if (option == 4)
        {    
            total = firstProductPrice + secondProductPrice + thirdProductPrice;
    
           
            cout << "Total price of all products: $" << total << endl;
	        getch();        // for stoping screen until anykey is pressed
        }
        if (option == 5)
        {
            cout << "First Product Price: $" << firstProductPrice << endl;
            cout << "Second Product Price: $" << secondProductPrice << endl;
            cout << "Third Product Price: $" << thirdProductPrice << endl;
	        getch();        // for stoping screen until anykey is pressed
        }
	if(option == 6)
	{
		cout<<"THANKS FOR USING ME (:";
        return 0;
	}
        
    }

}
        
       
    






