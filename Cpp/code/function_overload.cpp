#include<iostream>
using namespace std;
void add(int no1,int no2)
{
	cout<<"\nint wala"<<no1<<"+"<<no2<<"="<<(no1+no2);
}

void add(float no1,float no2)
{
	cout<<"\nfloat wala"<<no1<<"+"<<no2<<"="<<(no1+no2);
}

void add(string no1,string no2)
{
	cout<<"\nstring wala"<<no1<<"+"<<no2<<"="<<(no1+no2);
}
int main()
{
add(11.7f,22.0f);
add("ajay"," singh");
add(10,20);
return 0;
}