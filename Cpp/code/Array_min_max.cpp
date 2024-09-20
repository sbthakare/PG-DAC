#include<iostream>

using namespace std;
int main()
{
	int a[100],size,index,min,max;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements\n";
	for(index=0;index<size;index++)
		{
			cout<<"\nEnter element at "<<index<<":";
			cin>>a[index];//read
		}
	min=a[0];
	max=a[0];
	for(index=1;index<size;index++)
		{
			if(a[index]>max)
				max=a[index];
			if(a[index]<min)
				min=a[index];
		}

	cout<<endl<<"Min:"<<min<<"\tMax:"<<max;
	
	return 0;
}