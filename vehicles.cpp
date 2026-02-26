#include<iostream>
using namespace std;
int main()
{
	char x;
	int hours;
	cout<<"m = MotorBike"<<endl;
	cout<<"b = Bus"<<endl;
	cout<<"c = Car"<<endl;
	cout<<"Enter your Vehicle Type ";
	cin>>x;
	cout<<"Enter your Hours ";
	cin>>hours;
	if(x=='m')
	cout<<"Your Motorbike charges are "<<hours*10;
	else if (x=='b')
	cout<<"Your Bus charges are "<<hours*20;
    else if (x=='c')
	cout<<"Your Car charger are "<<hours*30;
	else
	cout<<"YOU ARE NOT ENTERED";
	

	
}
