#include<iostream>
using namespace std;

int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}
int main()
{
	int no1,no2,no3,no4;
	cout<<"\nEnter 4 numbers\n";
	cin>>no1>>no2>>no3>>no4;
	cout<<"\nMin is:"<<min(min(no1,no2),min(no3,no4));
return 0;
}