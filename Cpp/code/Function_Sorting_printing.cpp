#include<iostream>
using namespace std;
//code in functions
//sort to sort the array :sort() this internally ccalls print to print the array()
void print_array(int a[],int size)
{
	cout<<"\nArray has\n";
	for(int i=0;i<size;i++)
	 cout<<a[i]<<" , ";
}
void sort(int temp[],int size)
{
	for(int i=0;i<size-1;i++)
	{
	for(int j=0;j<size-1;j++)
	{
		if(temp[j]>temp[j+1])
		{
			int t=temp[j];
			temp[j]=temp[j+1];
			temp[j+1]=t;
		}	
	}
   }
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
sort(a,size);//arrays are passed by ref not value
cout<<"\n in main\n";
print_array(a,size);
return 0;
}