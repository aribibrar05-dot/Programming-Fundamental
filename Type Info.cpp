#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int a=54;
	float b=9.8;
	int sum=a+(int)b;
	cout<<"Enter value of int "<<a<<endl;
	cout<<"Enter value of float "<<b<<endl;
	cout<<"Type of  b "<<typeid(b).name()<<endl;
	cout<<" Sum ="<<sum<<endl;
	return 0;
}
