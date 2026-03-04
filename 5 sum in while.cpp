#include<iostream>
using namespace std;
int main()
{
	int sum,n;
	n=0;
	while(n<=50)
	{
		cout<<n<<endl;
		sum=sum+n;
		n=n+5;
	}
	cout<<sum<<endl;
	return 0;
}
