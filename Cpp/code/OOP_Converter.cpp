#include<iostream>
using namespace std;
//create class convertor
//method to set amount in inr
//method to set amount in usd
//method to convert amount in inr from usd
//method to convert amount in usd from inr
//use this class using menu driven code to set/convert 
//with all 4 options
//option of convert to usd /inr only comes iff we set_inr()/set_usd()


class convertor
{
	private:
	float inr,usd;
	public:
	convertor()
	{
		inr=0.0f;
		usd=0.0f;
	}
	void set_inr(float i)
	{
		inr=i;
		cout<<"\n"<<inr<<"INR set";
	}
	void set_usd(float u)
	{
		usd=u;
		cout<<"\n"<<usd<<"USD set";
	}
	void convert_to_inr()
	{
		if(usd==0)
			cout<<"\nUSD amount not set yet";
		else
			cout<<usd<<" USD is "<<usd*83<<" INR";
	}
	void convert_to_usd()
	{

	 if(inr==0)
		cout<<"\nINR amount not set yet";
	 else		
		cout<<inr<<" INR is "<<inr/83<<" USD";
	}
	bool status_inr()
	{
		if(inr!=0.0f)
			return true;
		else
			return false;
	}
	bool status_usd()//vibhishan : allows private data outside class
	{
		if(usd!=0.0f)
			return true;
		else
			return false;
	}
};

int main()
{
 convertor obj;
 int choice;
 do
 {
 	cout<<"\nWelcome to convertor";
 	cout<<"\n1.set amount in INR";
 	cout<<"\n2.set amount in USD";
 	if(obj.status_inr())
 		cout<<"\n3.convert INR to USD";
 	if(obj.status_usd())
 		cout<<"\n4.convert USD to INR";
 	cout<<"\n0.Exit\n:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 			float i;
 			cout<<"\nEnter Amount:";
 			cin>>i;
 			obj.set_inr(i);
 			break;
 		case 2:
 			float u;
 			cout<<"\nEnter Amount:";
 			cin>>u;
 			obj.set_usd(u);
 			break;
 		case 3:
 			obj.convert_to_usd();
 			break;
 		case 4:
 			obj.convert_to_inr();
 			break;
 		case 0:
		 	cout<<"\nThanks for using the code.."	;
		 	break;
		default:
			cout<<"\nOption not in list...";
		 	break;
	}
 }while(choice!=0);
return 0;
}
