#include<iostream>
using namespace std;
main(){
	float imposter,player,chance;
	cout<<"Enter Imposter Count: ";
	cin>>imposter;	
	cout<<"Enter Player Count: ";
	cin>>player;	
	chance=(imposter/player)*100;
	cout<<"Chance of being an imposter: "<<chance<<"%";
}