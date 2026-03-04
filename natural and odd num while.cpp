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
	if(i%2!=0)
    {
    cout<<"Odd number= "<<i<<endl;	
	}
	i++;
	}
	
    return 0;
}
