#include<iostream> 
using namespace std;
int main(){
	int x , y;	
	char op;
	cout<<"enter the value of x and y"<<endl;
	cin>>x>>y;
	cout<<" enter your operation"<<endl;
	cin>>op;
	switch(op){
    case '+':
    	cout<<"result is ="<<x+y;
    	break;
    	case '-':
    	cout<<"result is ="<<x-y;
    	break;
    	case '*':
    	cout<<"result is ="<<x*y;
    	break;
    	case '/':
    	cout<<"result is ="<<x/y;
    	break;
    	default:
    	cout<<"your operator is wrong";
    	}
}
