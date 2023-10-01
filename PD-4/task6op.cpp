/*Task06(OP):Writeaprogramthatprints“Hassan”
(Vertically)ontheconsolescreenby usingBigAlphabets.
Instruction:DefineaseparatefunctionforprintingeachAlphabet*/

#include<iostream>
using namespace std;

void PrintH();  //prototype
void PrintA();	//prototype
void PrintS();	//prototype
void PrintN();	//prototype


main()
{
	PrintH();
	PrintA();
	PrintS();
	PrintS();
	PrintA();
	PrintN();
}


void PrintA()
{
	cout<<"  ##"<<endl;
	cout<<"##  ##"<<endl;
	cout<<"######"<<endl;
	cout<<"##  ##"<<endl;
	cout<<"##  ##"<<endl;
	cout<<" "<<endl;
}

void PrintH()
{
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<" "<<endl;
}	
void PrintS()
{
	cout<<"  ###"<<endl;
	cout<<"##    ##"<<endl; 
	cout<<"  ###"<<endl;
	cout<<"##    ##"<<endl;
	cout<<"  ###"<<endl;
	cout<<" "<<endl;
}

void PrintN()
{
	cout<<"##   ##"<<endl;
	cout<<"###  ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##  ###"<<endl;
	cout<<"##   ##"<<endl; 
	cout<<" "<<endl;
} 	





