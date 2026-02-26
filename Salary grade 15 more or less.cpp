#include<iostream>
using namespace std;
int main()
{
	int grade,salary;
	cout<<"Enter Grade= "<<endl;
	cin>>grade;
	cout<<"Enter Salary= "<<endl;
	cin>>salary;
	if (grade<=15)
	 {
		cout<<"Detect 2000"<<endl;
		salary=salary- 2000;}
		else if (grade>15)
		{
		cout<<"Detect 5000"<<endl;
		salary=salary-5000;
		}
		cout<<"Your Final Salary is= "<<salary;
		return 0;
		
}
