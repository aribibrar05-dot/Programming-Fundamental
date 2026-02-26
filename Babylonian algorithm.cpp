#include <iostream>
using namespace std;
int main()
{
	int n;
	float guess,r;
	cout<<"Enter n= ";
	cin>>n;
	guess=n/2;
	while(n!=guess*guess)
	{
	r=n/guess;
	cout<<"r= "<<r<<endl;
	guess=(guess+r)/2.0;
	cout<<"guess= "<<guess<<endl;
	cout<<guess;
	return 0;
	}
}





