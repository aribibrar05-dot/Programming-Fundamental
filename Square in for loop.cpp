#include<iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cout<<"number= ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	int power=i*i;
	sum=power+sum;
	}
	cout<<sum<<endl;
	return 0;
}
