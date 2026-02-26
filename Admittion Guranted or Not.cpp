#include<iostream>
using namespace std;
int main ()
{
	int marks1,marks2,marks3;
	int marks,totalmarks,average;
	cout<<"Enter Three Subjects marks: "<<endl;
	cin>>marks1;
	cin>>marks2;
	cin>>marks3;
	totalmarks=300;
	totalmarks=marks1+marks2+marks3;
	average=totalmarks/3;
	if(average>=80)
	cout<<"Admittion Guranted  ";
	else
	cout<<"Admittion is not Guranted ";
	return 0;
}
