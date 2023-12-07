#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);

main()
{
    string names[100];
    int ages[100];
    float matricMarks[100];
    float fscMarks[100];
    float ecatMarks[100];
    int size;
    int count =0;
    string file_Name;
    file_Name = "student.txt";
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, file_Name);
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string ans;
    while (ans != "No")
    {
        cout << "Enter Student's name: ";
        getline(cin>>ws, names[count]);
        cout << "Enter Student's age: ";
        cin >> ages[count];
        cout << "Enter Student's Matric marks: ";
        cin >> matricMarks[count];

        cout << "Enter Student's Fsc marks: ";
        cin >> fscMarks[count];

        cout << "Enter Student's Ecat marks: ";
        cin >> ecatMarks[count];

        count++;
        cout << "Enter No to Stop or Yes to continue Enter: ";
        cin >> ans;
    }
}
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::out);
    for (int index = 0; index < count; index++)
    {
        file << "Name: " << names[index] << endl;
        file << "Age: " << ages[index] << endl;
        file << "Matric Marks: " << matricMarks[index] << endl;
        file << "Fsc Marks: " << fscMarks[index] << endl;
        file << "Ecat Marks: " << ecatMarks[index] << endl;
        file << endl;
    }
    file.close();
}