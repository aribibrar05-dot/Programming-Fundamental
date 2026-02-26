#include<iostream>
using namespace std;
int main()
{
	double n=71.5;
	cout.setf(ios::fixed);
	cout.setf(ios:: showpoint);
	cout.precision(4);
	cout<<" Enter n= ";
	cin>>n;
	cout<<n;
	return 0;
}
