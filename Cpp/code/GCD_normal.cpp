#include<iostream>
using namespace std;
int main()
{
	int no1,no2,t;
	int tno1,tno2;
	cout<<"Enter 2 numbers\n";
	cin>>no1>>no2;	
	tno1=no1;tno2=no2;
	while(no1%no2!=0)
	{
		t=no1;
		no1=no2;
		no2=t%no2;
	}
	 cout<<"\nGCD is:"<<no2;
	 cout<<"\nLCM is:"<<(tno1*tno2)/no2;
 return 1;
}