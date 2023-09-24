#include<iostream>
using namespace std;
main(){
	string name;
	float target_weight_loss;
	float days;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>target_weight_loss;
	days=target_weight_loss*15;
	cout<<name<<" will need "<<days<<" days to lose "<<target_weight_loss<<" kg of weight by following the doctor's suggestions";
}