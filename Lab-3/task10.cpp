#include <iostream>
using namespace std;
main()
{
	string n;
	int w,d,l,s;
	cout<<"Enter the name of the cricket team: ";
	cin>>n;
	cout<<"Enter the number of wins: ";
	cin>>w;
	cout<<"Enter the number of draws: ";
	cin>>d;
	cout<<"Enter the number of losses: ";
	cin>>l;
	s=w*3+d+(l*0);
	cout<<n<<" has obtained "<<s<<" points in the Asia cup tournament.";
}