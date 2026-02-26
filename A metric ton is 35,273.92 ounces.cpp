#include <iostream>
using namespace std;

int main() 
{
	int n=1;
	while(n<=10)
	{
	float m,noofboxes, wofcereal;
	cout<<"enter the weight of cereal box in ounes: "<<endl;
	cin>>wofcereal;
   	m=wofcereal/35273.92;
	cout<<"the weight in meter tone is: "<<m<<endl;
	noofboxes=35273.92/wofcereal;
	cout<<"no of boxes: "<<noofboxes;
}
   n++;
	return 0;
}
