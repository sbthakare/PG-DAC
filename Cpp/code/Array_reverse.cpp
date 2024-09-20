#include<iostream>
//print data in reverse order of insertion
//input 11 22 33 44
//44 33 22 11
//tip play with index
using namespace std;
int main()
{
	int a[100],size,index;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements\n";
	for(index=0;index<size;index++)
		{
			cout<<"\nEnter element at "<<index<<":";
			cin>>a[index];
		}
	cout<<"\nEntered elements are\n";

	for(index=size-1;index>=0;index--)
		{
			cout<<"\nelement at "<<index<<" is :"<<a[index];
		}
	
	
	return 0;
}