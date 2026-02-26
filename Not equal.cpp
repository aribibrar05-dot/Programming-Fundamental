#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter three Different Numbers= "<<endl;
	cin>>n1>>n2>>n3;
	if(n1!=n2&&n1!=n3&&n2!=n3)
	{
	cout<<n1<<n2<<n3<<endl;
	cout<<n2<<n1<<n3<<endl;
	cout<<n3<<n2<<n1<<endl;
	cout<<n1<<n3<<n2<<endl;
	cout<<n3<<n1<<n2<<endl;
	cout<<n2<<n3<<n1<<endl;
		}else
	cout<<"Number must be not Equal";
	
}
