#include<iostream>
using namespace std;
int gcd(int no1,int no2)
{
	if(no1%no2==0)
		return no2;
	else
		return(gcd(no2,no1%no2));
}

int main()
{
int no1=18,no2=12;
cout<<"GCD of "<<no1<<","<<no2<<" is "<<gcd(no1,no2);
return 0;
}
