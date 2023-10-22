#include <iostream>
using namespace std;

float triangular_Number(int num);
/*This Triangular Number Sequence is generated from a pattern of dots that form a triangle.
The first 5 numbers of the sequence, or dots, are
1, 3, 6, 10, 15, 21 ...
This means that the first triangle has just one dot, the second one has three dots, the third
one has 6 dots, and so on as shown in the figure.*/

main()
{
    int num;         //variable daclaration

    cout<<"Enter number of Triangle: ";
    cin>>num;


    cout<<"Dots in the Triangle: "<<triangular_Number(num);      // function calling


}
float triangular_Number(int num)         //function defination
{

    int sum;
    int number;

    sum = 0;
    number = 0;

    for(int dots = 1 ; dots<= num ; dots++)
    {

            sum = sum+dots;
            number = sum;

    }

    return number;      //returning the value

}