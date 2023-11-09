#include <iostream>
using namespace std;

double  calculate_Total_resistance(double resistance[] , int size );
/*When resistors are connected together in series, the same current passes through each
resistor in the chain and the total resistance, RT, of the circuit must be equal to the sum of
all the individual resistors added together. That is
RT = R1 + R2 + R3 ...*/


main()
{

    int size;       //variable daclaration

    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>size;


    cout <<"Enter the resistance values (in ohms) of the "<<size<<" resistors, one per line: "<<endl;

    double resistance_array[size-1];        //array daclaration

    
    for(int index = 0; index < size; index++)
    {
        cin>>resistance_array[index];
    }
    
    cout<<"The total resistance of the series circuit is "<<calculate_Total_resistance(resistance_array ,size)<<" ohms.";       //function calling
    



}
double  calculate_Total_resistance(double resistance[] , int size )     //function defination
{

    double sum;      //variable daclaration
    sum = 0;

    

    for(int index = 0; index < size ; index++)
    {
        sum = sum+resistance[index];
    }

    return sum;     //returning the value
}