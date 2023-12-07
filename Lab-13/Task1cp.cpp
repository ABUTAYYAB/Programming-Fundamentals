#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int count_Lines(string name);

main()
{
    string name;
    name = "task1.txt";

    cout<<"Total number of lines: "<<count_Lines(name);

}
int count_Lines(string name)
{
    fstream file;
    string line;
    int count;

    count = 0;
    file.open(name,ios::in);
    while(!file.eof())
    {
        getline(file,line);
        count++;
    }
    file.close();
    return count;
}