#include<iostream>
using namespace std;
main(){
	float initialVelocity;
	float finalVelocity;
	float acceleration;
	float time;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>initialVelocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	cout<<"Enter Time (s): ";
	cin>>time;
	finalVelocity=(acceleration*time)+initialVelocity;
	cout<<"Final Velocity (m/s): "<<finalVelocity;
}