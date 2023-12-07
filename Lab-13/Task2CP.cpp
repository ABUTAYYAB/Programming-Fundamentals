#include<fstream>
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

int count_characters(string name);
main()
{
    string name;
    name = "task1.txt";

    cout<<"Total number of characters: "<<count_characters(name);

}
int count_characters(string name)
{
    fstream file;
    string line;
    int count;

    count = 0;
    file.open(name,ios::in);
    while(!(file.eof()))
    {
        getline(file,line);
        count += line.length();
    }
    file.close();
    return count;
}