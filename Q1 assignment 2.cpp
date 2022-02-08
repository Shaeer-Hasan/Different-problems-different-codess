#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter hadness of steel?"<<endl;
	cin>>a;
	cout<<"Enter content of carbon in steel?"<<endl;
	cin>>b;
	cout<<"Enter tensile strenght of steel?"<<endl;
	cin>>c;
	if (a>50 && b<0.7 && c>5600)
	{
		cout<<"Grade 10"<<endl;
	}
	else if  (a>50 && b<0.7)
	{
		cout<<"Grade 9"<<endl;
	}
	else if ( b<0.7 && c>5600)
	{
		cout<<"Grade 8"<<endl;
	}
	else if (a>50 && c>5600)
	{
		cout<<"Grade 7"<<endl;
	}
	else if (a>50 || b<0.7 || c>5600)
	{
		cout<<"Grade 6"<<endl;
	}
	else 
	{
		cout<<"Grade 5"<<endl;
	}
	return 0;
}
