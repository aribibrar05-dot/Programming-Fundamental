#include<iostream>
using namespace std;
int main()
{
	char choice;
	cout<<"Enter your Choice= ";
	cin>>choice;
	while(choice=='y'|| choice=='Y')
	{
	float m,w,noofbox;
	const double ounce=35273.92;
	cout<<"Enter weight of the cereal box= ";
	cin>>w;
	m=w/35273.92;
	cout<<"The weight in meter tone= "<<m<<endl;
	noofbox=35273.92/w;
	cout<<"No of Boxes= "<<noofbox<<endl;
	}

	
	return 0;
	
}
