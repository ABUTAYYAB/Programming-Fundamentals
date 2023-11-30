#include<iostream>
using namespace std;

void input_Array(int array[][5], int row);
/*inputting the data in array */
void print_OrginalMatrix(int array[][5], int row);
/*it will print the orginal array*/
void print_Modified_Array(int array[][5], int row);
/*print the modified array*/

main() 
{
    int row;

    cout<<"Enter row size: ";
    cin>>row;

    int array[row][5];

    input_Array(array, row);
    print_OrginalMatrix(array, row);
    print_Modified_Array(array, row);

}
void input_Array(int array[][5], int row) 
{
    cout << "Enter the elements of the matrix: " << endl;

    for(int columns = 0; columns < row; columns++) 
    {
        for(int rows = 0; rows < 5; rows++) 
        {
            cout << "Enter element at position [" << columns << "][" << rows << "]: ";
            cin >> array[columns][rows];
        }
    }
    cout<<endl;

}

void print_OrginalMatrix(int array[][5], int row) 
{
    cout<<"Original Matrix:"<<endl;

    for(int columns = 0; columns < row; columns++) 
    {
        for(int rows = 0; rows < 5; rows++) 
        {
            cout << array[columns][rows] << " ";
        }
        cout << endl;
    }
    
}

void print_Modified_Array(int array[][5], int row) 
{
    int maxSumColumn;
    int maxSum;
    int columnSum;
    int swap;

    maxSumColumn = 0;
    maxSum = 0;

    for (int j = 0; j < 5; j++) 
    { 
        columnSum = 0;

        for (int i = 0; i < row; i++) 
        {  
            columnSum += array[i][j];
        }
        if (columnSum > maxSum) 
        {
            maxSum = columnSum;
            maxSumColumn = j;
        }
    }
    

    for (int i = 0; i < row; i++) 
    {
        swap = array[i][0];
        array[i][0] = array[i][maxSumColumn];
        array[i][maxSumColumn] = swap;
    }
    

    cout<<endl;
    cout<<"Matrix after largest column moved to first:"<<endl;
    for(int columns = 0; columns < row; columns++) 
    {
        for(int rows = 0; rows < 5; rows++) 
        {
            cout << array[columns][rows] << " ";
        }
        cout << endl;
    }

    

}
