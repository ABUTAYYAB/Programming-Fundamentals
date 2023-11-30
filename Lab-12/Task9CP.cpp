#include <iostream>
using namespace std;


void print_Array(int row, int array[][3]);
/*print the array*/
int same_Row(int row, int array[][3]);
/*Create a function that checks the nx3 2D array and returns a count of the total number of
identical rows.*/


main()
{
    int row;
    cout<<"Enter the number of rows for the array: ";
    cin>>row;

    int array[row][3];

    print_Array(row, array);

    cout<<"The count of identical rows in the array is: "<<same_Row(row, array);
}

void print_Array(int row, int array[][3])
{
    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> array[x][y];
        }
    }
}

int same_Row(int row, int array[][3])
{

    int count;
    count = 0;

    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (array[x][y] == array[x][y + 1] && array[x][y+1] == array[x][y+2])
            {
                count++; 
            }
        }
    }
    
    return count;
}