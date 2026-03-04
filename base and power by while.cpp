#include<iostream>
using namespace std;
int main()
{
	int base,power,result;
	result=1;
	int i=1;
	cout<<"Enter Base= ";
	cin>>base;
	cout<<"Enter Power= ";
	cin>>power;
	while(i<=power)
	{
	result=base*result;
	i++;
	}
	cout<<result<<endl;
	
}
