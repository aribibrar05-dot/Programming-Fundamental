#include<iostream>
using namespace std;
int main()
{
	double basicsalary,Allowance,Totalsalary;
	cout<<" Enter Basicsalary ";
	cin>>basicsalary;
	Allowance=0.2 * basicsalary;
    Totalsalary = basicsalary + Allowance;
	cout<<"Allowance "<<Allowance<<endl;
	cout<<" Total Salary "<<Totalsalary<<endl;
	return 0;
}
