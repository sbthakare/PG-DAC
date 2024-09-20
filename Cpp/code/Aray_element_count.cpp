#include<iostream>
//read a number from user and count its frequency
//i/p: 11--->4 times
using namespace std;
int main()
{
	int a[]={11,22,11,44,33,44,22,66,77,11,88,11};
	int size=12,index,count=0;
	int key;
	cout<<"Enter key:";
	cin>>key;
	for(index=0;index<size;index++)
		{
			if(a[index]==key)
				count++;
		}

	cout<<endl<<key<<":"<<count;
	
	return 0;
}