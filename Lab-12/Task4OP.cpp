#include<iostream>
using namespace std;

int print_Array(int array[][3], int row);
/*Write a program that reads a user defined matrix with column size always 3 and passes
that 2D array along with its rowSize to a function named printSum that prints the sum of
elements of that matrix.*/
main()
{
    int row;
    cout<<"Enter row size: ";
    cin>>row;
    int array[row][3];
    cout<<"The sum of elements in the matrix is: "<<print_Array(array,row);
}
int print_Array(int array[][3], int row)
{
    int sum;

    sum = 0;

    cout<<"Enter the elements of the matrix: "<<endl;

    for(int x = 0; x < row; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
            cin>>array[x][y];
            sum = sum +array[x][y];

        }
    }

    return sum;
    
}