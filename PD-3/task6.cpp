#include<iostream>
using namespace std;
main(){
	float sizeofbag;
	float costofbag;
	float areacovered;
	float result;
	float costperpound;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>sizeofbag;
	cout<<"Enter the cost of the bag: $";
	cin>>costofbag;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>areacovered;
	costperpound=costofbag/sizeofbag;
	cout<<"Cost of fertilizer per pound: $"<<costperpound<<endl;
	result=costofbag/areacovered;
	cout<<"Cost of fertilizing per square foot: $"<<result;
}