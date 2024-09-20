#include<iostream>
using namespace std;
int main()
{
  int n,d;
  try
  {
  	cout<<"\nEnter number to be divided:";
  	cin>>n;
  	cout<<"\nEnter number to divide with:";
  	cin>>d;
  	if(d==0)
  		throw (0);
  	cout<<"\n"<<n<<"/"<<d<<"="<<(float)n/d;
  }
  catch(int data)
  {
  	cout<<"\n"<<"due to data as:"<<data<<" can not operate ahead..";
  	cout<<"\nEnter number to divide with:";
  	cin>>d;
  	cout<<"\n"<<n<<"/"<<d<<"="<<(float)n/d;
  }
  cout<<"\nok bye";
 
}