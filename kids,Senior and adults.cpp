#include<iostream>
using namespace std;
int main()
{
	int choice,month;
	cout<<"Enter your Choice= "<<endl;
	cin>>choice;
	cout<<"Enter Month= "<<endl;
	cin>>month;
	switch(choice)
	{
		case 1:
		cout<<"Kid charges= "<<20*month;
		break;
		case 2:
		cout<<"adult charges= "<<50*month;
		break;
		case 3:
		cout<<"Senior charges= "<<30*month;
		break;
		default:
		cout<<"Your Choice is Invalid ";
	}
}
