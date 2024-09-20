#include<iostream>
using namespace std;
void doubl_it_1(int data)//pass by value
{
	cout<<"\n in function data:"<<data;
	data=data*2;
	cout<<"\n in function at end data:"<<data;
}
void doubl_it_2(int *p)//pass by address
{
	cout<<"\n in function data:"<<*p<<" from "<<p;
	*p=*p*2;
	cout<<"\n in function at end data:"<<*p<<" from "<<p;
}
void doubl_it_3(int &p)//pass by reference
{
	cout<<"\n in function data:"<<p<<" from "<<p;
	p=p*2;
	cout<<"\n in function at end data:"<<p<<" from "<<p;}
int main()
{
	int data=100;
	
	cout<<"\n in main data:"<<data;
	doubl_it_1(data);
	cout<<"\n in main at end data:"<<data;
	
	cout<<"\n 2 in main data:"<<data;
	doubl_it_2(&data);
	cout<<"\n 2 in main at end data:"<<data;
    
	cout<<"\n 3 in main data:"<<data;
	doubl_it_3(data);
	cout<<"\n 3 in main at end data:"<<data;
	return 0;
}
