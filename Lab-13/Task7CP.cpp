#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void print_WordsBiggerthan4(string name);
main()
{
    string name;
    name = "task7.txt";

    print_WordsBiggerthan4(name);
}
void print_WordsBiggerthan4(string name)
{
    fstream file;
    string line;
    string words[100];
    string word;
    int count;

    count = 0;

    file.open(name, ios::in);
    while (getline(file, line))
    {
        // !file.eof()
        // getline(file, line);
        for (int index = 0; index < line.length(); index++)
        {

            if (line[index] == ' ' || line[index] == '\0')
            {

                words[count] = word;
                word = "";

                count++;
                continue;
            }

            word += line[index];
        }
    }

    file.close();

    for (int idx = 0; idx < count ; idx++)
    {
        word = words[idx];
        if(word.length() < 4)
        {
            cout<<words[idx]<<" ";
        }
    }

}