#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,x;
	double sum;
	cout<<"Enter Number= ";
	cin>>x;
	cout<<"Enter Range= ";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
	sum=sum+1/pow(x,i);
	}
	cout<<sum<<endl;
	
}
