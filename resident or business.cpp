#include<iostream> 
using namespace std;
int main()
{
	char code;
	int account_no;
	int no_of_premium_channel;
	float amount_due;
	int num_of_baic_service_connection;
	int num_of_premium_channel;
	// resident
	const double resident_processing_fee= 4.50;
	const double resident_service_fee= 20.50;
	const double resident_premium_channel_fee= 7.50;
	//premium
	const double business_processing_fee=15.00;
	const double business_service_fee=75.00;
	const double business_connection_fee=5.00;
	const double business_premium_channel_fee=50.00;
	cout<<"Enter Account no= ";
	cin>>account_no;
	cout<<"Enter your code= ";
	cin>>code;
	cout<<"Number of basic Service connection= ";
	cin>>num_of_baic_service_connection;
	cout<<"no_of_premium_channel= ";
	cin>>no_of_premium_channel;
	switch (code)
	{
		case 'R':
		case 'r':	
		cout<<"Resident Customer"<<endl;
		amount_due=resident_processing_fee+resident_service_fee+(resident_premium_channel_fee*num_of_premium_channel);
		cout<<amount_due;
		break;
		
		case 'B':
	    case 'b':
	    cout<<"Business Customer "<<endl;
	    if(num_of_baic_service_connection<=10)
	    {amount_due=business_processing_fee+business_service_fee+( business_premium_channel_fee*num_of_premium_channel);
	    cout<<amount_due;
		}
	    else
		{amount_due=business_processing_fee+business_service_fee+(num_of_baic_service_connection-10)*business_connection_fee+
	    num_of_premium_channel* business_connection_fee;
	    cout<<amount_due;
		}
		break;
	    default:
	    cout<<"You are not Customer !"<<endl;
	    break;
		}
		return 0;
	
}
