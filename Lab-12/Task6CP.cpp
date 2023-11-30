#include<iostream>
using namespace std;

string battle_Ship(string array[][5], string input);
/*Write a program that reads a 3x3 matrix and check whether the matrix is an identity
matrix or not.
Note: The identity matrix of size n is the n × n square matrix with ones on the main
diagonal and zeros elsewhere.*/
main()
{
    string input;
    string array[5][5] = {
        {".",".",".","*","*"},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".",".","*","*","."},
        };

    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    getline(cin,input);

    cout<<"Result: "<<battle_Ship(array,input);

    
}
string battle_Ship(string array[][5], string input)
{
    string row;
    string column;
    string result;
    int column_Index;
    int row_Index;

    result = "JASSBCIHQDACBDH";
    row = input[1];
    column = input[0];

    if(column == "A")
    {
        column_Index = 0;
    }
    else if(column == "B")
    {
        column_Index = 1;
    }
    else if(column == "C")
    {
        column_Index = 2;
    }
    else if(column == "D")
    {
        column_Index = 3;
    }
    else if(column == "E")
    {
        column_Index = 4;
    }

    if(row == "1")
    {
        row_Index = 0;
    }
    else if(row == "2")
    {
        row_Index = 1;
    }
    else if(row == "3")
    {
        row_Index = 2;
    }
    else if(row == "4")
    {
        row_Index = 3;
    }
    else if(row == "5")
    {
        row_Index = 4;
    }



    if(array[column_Index][row_Index] == ".")
    {
        result = "splash";

    }
    else if(array[column_Index][row_Index] == "*")
    {
        result = "BOOM";

    }

    return result;

}