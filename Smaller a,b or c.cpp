#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter A= ";
	cin>>a;
	cout<<"Enter B= ";
	cin>>b;
	cout<<"Enter C= ";
	cin>>c;
	if(a<b)
	{if(a<c)
	cout<<"A is smaller ";
	else
	cout<<"C is smaller ";
	}
	{if(b<c)
	cout<<"B is smaller ";
	else
	cout<<"C is smaller ";
	}
	return 0;
}
