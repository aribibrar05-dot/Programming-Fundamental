#include<iostream>
using namespace std;
int main ()
{
	int number1,number2,max_value;
	cout<<" Enter number 1 "<<endl;
	cin>>number1;
	cout<<" Enter number 2 "<<endl;
	cin>>number2;
	max_value=(number1>number2)?number1:number2;
	cout<<"Larger number is "<<max_value;
}
