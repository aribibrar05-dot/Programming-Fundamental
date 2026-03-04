#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	i=a;
	cout<<"Enter your start number= ";
	cin>>i;
	cout<<"Enter your last number= ";
	cin>>b;
	while(i<=b)
	{
		cout<<i<<endl;
		i++;
	}
	if(1%2!=0)
	cout<<i;
    return 0;
}
