#include<iostream>
using namespace std;
//code area function to take l and b and print area of rectangle
void area(float l,float b)
{
	cout<<"\n"<<"Area of rectangle is:"<<l*b;
}
int main()
{
	float l,b;
	cout<<"\nEnter 2 sides\n";
	cin>>l>>b;
	area(l,b);
return 0;
}
