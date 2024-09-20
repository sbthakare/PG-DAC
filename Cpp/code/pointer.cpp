#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	cout<<"\ninitial:"<<p;
	cout<<"\naddress of a:"<<&a;
	p=&a;
	cout<<"\nafter assignment:"<<p;
	cout<<"\n accessing from address "<<p<<" we get "<<*p;
	a=a+10;
	cout<<"\nafter a changed a:"<<a<<"  p is ref:"<<p<<" value is "<<*p;
	*p=*p+100;
		cout<<"\nafter a changed a:"<<a<<"  p is ref:"<<p<<" value is "<<*p;
}