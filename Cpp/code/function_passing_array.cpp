#include<iostream>
using namespace std;

void print_array(int a[],int size)
{
	cout<<"\nArray has\n";
	for(int i=0;i<size;i++)
	 cout<<a[i]<<" , ";
}
int sum(int a[],int size)
{
	int sum_of=0;
	for(int index=0;index<size;index++)
		{
		sum_of=sum_of+a[index];
		}
	return(sum_of);
}
int main()
{
int a[50],size;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements\n";
	for(int index=0;index<size;index++)
		{
			cout<<"\nEnter element at "<<index<<":";
			cin>>a[index];
		}
	
	print_array(a,size);
	cout<<"\nSum is:"<<sum(a,size);
	return 0;
}