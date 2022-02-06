 #include<iostream>
 using namespace std;
 int main()
 {
 	  cout<<"            MENU"<<endl;
	cout<<"1=sausage                       RS=220"<<endl;
	cout<<"2=cheese and mushroom omelet    RS=50" <<endl;
	cout<<"3=paratha                       RS=25" <<endl;
	cout<<"4=french toast                  RS=45" <<endl;
	cout<<"5=coffee                        RS=120"<<endl;
	cout<<"6=tea                           RS=40" <<endl;
	cout<<"7=pan cake with nutella serving RS=390"<<endl;
 
 	
	char name[20];
	cout<<"Enter your name:"<<endl;
	cin>>name;
	int item;
	cout<<"Enter item:"<<endl;
	cin>>item;
	int quantity;
	cout<<"Enter quantity:";
	cin>>quantity;
	cout<<"customer name :"<<endl;
	if(item==1)
	{
		int bill;
		bill=quantity*400;
		cout<<"bill is:"<<endl;	
	}
	else
	{
		int bill2;
		bill2=quantity*400;
		cout<<"bill is:";
	}
	return 0;
	 
 }
