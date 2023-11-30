#include<iostream>
using namespace std;

void print_Matrix(int array[][3]);
/*it will print matrix on screen*/
bool check_IdentityMatrix(int array[][3]);
/*Write a program that reads a user defined matrix with column size always 3 and passes
that 2D array along with its rowSize to a function named printSum that prints the sum of
elements of that matrix.*/

main()
{
    int check;
    int array[3][3];
    cout<<"Enter the elements of the matrix: "<<endl;

    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
            cin>>array[x][y];

        }
    }

    print_Matrix(array);
    check = check_IdentityMatrix(array);
    if(check)
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }




}
void print_Matrix(int array[][3])
{
    cout<<"The matrix you entered is:"<<endl;
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<array[x][y]<<"\t";
        }
        cout<<endl;
    }

}
bool check_IdentityMatrix(int array[][3])
{
    bool check;
    int count;
    check = false;
    count = 0;
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            if(x == y && array[x][y] == 1)
            {
                count++;
            }
            if(array[x][y] == 1 && x != y)
            {
                count--;
            }
        }
    }
    if(count == 3)
    {
        check = true;
    }

    return check;


}
