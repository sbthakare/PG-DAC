#include<iostream>

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

	for(index=0;index<size;index++)
		{
			cout<<"\nelement at "<<index<<" is :"<<a[index];
		}
	
	
	return 0;
}