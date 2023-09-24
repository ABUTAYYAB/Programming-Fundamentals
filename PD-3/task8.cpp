#include<iostream>
using namespace std;
main(){
	float veg_price;
	float fruit_price;
	float total_earning;
	int total_veg;
	int total_fruit;

	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>veg_price;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit_price;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>total_veg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>total_fruit;
	total_earning=(veg_price*total_veg/1.94)+(fruit_price*total_fruit/1.94);
	cout<<"Total earnings in Rupees (Rps): "<<total_earning;
}
	
	