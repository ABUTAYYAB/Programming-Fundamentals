#include <iostream>
using namespace std;

string hospital_Check(int days);
/*For a certain period of time, patients arrive at the hospital every day for an examination.
It initially has 7 doctors. Each doctor can treat only one patient per day, but sometimes
there is a shortage of doctors, so the remaining patients are sent to other hospitals. Every
third day the hospital makes calculations and if the count of untreated patients is greater
than the count of treated ones, another doctor is appointed. The appointment takes place
before the daily patient acceptance begins.
Write a program that calculates for a given period of time, the count of treated and
untreated patients.*/

main()
{
    int days;         //variable daclaration

    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;

    cout<<hospital_Check(days);      // function calling


}

string hospital_Check(int days)     //function defination
{

    int patient_Visited;
    int doctor_available;
    int untreated_Patient;
    int treated_Patient;
    string result;


    patient_Visited = 0;
    doctor_available = 7;
    untreated_Patient = 0;
    treated_Patient = 0;

    
    for (int iteration = 1; iteration <= days; iteration++)
    {

        cout << "Number of patients who visited hospital on Day " << iteration << ": ";
        cin >> patient_Visited;


        if (iteration % 3 == 0 )
        {
            
            if(untreated_Patient > treated_Patient)
            {

                doctor_available++;

            }

        }

        if (doctor_available >= patient_Visited )
        {

                treated_Patient += patient_Visited;

        }

        else if(doctor_available < patient_Visited)
        {

            treated_Patient += doctor_available;

            
            untreated_Patient = untreated_Patient + (-1*(doctor_available - patient_Visited)); // beacuse patient visited is bigger

        }
    }
    

    result = "Treated patients: " + to_string(treated_Patient) + "\nUntreated patients: " + to_string(untreated_Patient);


    return result;      //returning the value
}
