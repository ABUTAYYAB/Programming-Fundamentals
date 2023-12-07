#include <fstream>
#include <iostream>

using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);

main()
{
    string names[100];
    int adNumbers[100];
    float percentages[100];
    int count;
    string details;
    string topper;

    count = 0;
    details = "task5.txt";
    topper = "topperStudents.txt";

    getStudentDetails(names, adNumbers, percentages,count, details);
    saveToFile(names, adNumbers, percentages, count,topper);


}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int &count, string fileName)
{

    fstream inputFile;

    inputFile.open(fileName, ios::in);

    while (inputFile>>names[count]>>adNumbers[count]>>percentages[count])
    {
        if (percentages[count] >= 70)
        {
            count++;
        }
    }

    inputFile.close();

}

void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    fstream outputFile;
    outputFile.open(fileName, ios::out);

    for (int i = 0; i < count; i++)
    {
        outputFile<<"Name: "<<names[i]<<endl;
        outputFile<<"Admission Number: "<<adNumbers[i]<<endl;
        outputFile<<"Percentage: "<<percentages[i]<<endl<<endl;
    }

    outputFile.close();

}
