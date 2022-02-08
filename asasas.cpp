#include<iostream>
using namespace std;
int main(){
	float a;
	cout<<"Enter the number of days late book returned?"<<endl;
	cin>>a;
	if (a>=1 && a<=5)
	{
		cout<<"You are charged with o.5 Rs for late submission of book."<<endl;
	}
	else if (a>5 && a<=10)
	{
		cout<<"You are charged with 1 Rs for late submission of book."<<endl;
	}
	else if (a>10 && a<=30)
	{
		cout<<"You are charged with 5 Rs for late submission of book."<<endl;
	}
	else if (a>30)
	{
		cout<<"Your member ship has been canceled."<<endl;
	}
	else
	{
		cout<<"Please enter correct days number."<<endl;
	}
	return 0;
	
}