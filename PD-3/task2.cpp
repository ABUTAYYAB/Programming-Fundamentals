#include<iostream>
using namespace std;
main(){
	int minute;
	int fps;
	int totalfps;
	cout<<"Number of Minutes: ";
	cin>>minute;
	cout<<"Frames per Second: ";
	cin>>fps;
	totalfps=minute*60*fps;
	cout<<"Total Number of Frames: "<<totalfps;
}