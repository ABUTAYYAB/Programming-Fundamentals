#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int calculate_frequency(string name);
main()
{
    string name;
    name = "task1.txt";

    cout<<"Total number of characters: "<<calculate_frequency(name);

}
int calculate_frequency(string name)
{
    fstream file;
    char letter;
    int count;

    count = 0;
    file.open(name,ios::in);
    while(!file.eof())
    {
        file>>letter;
        if(letter == 's' || letter == 'S')
        count++;
    }
    file.close();
    return count;
}