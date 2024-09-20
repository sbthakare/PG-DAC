#include<iostream>
using namespace std;
int main()
{
	
	int i,j,space,s;

	for(space=5,i=1;space>=1 && i<=5;space--,i++)
	{
		//space print
		for(s=1;s<=space;s++)
			cout<<" ";
	
		//x print
		for(j=1;j<=i;j++)
		{
		   cout<<" X";
		
		}
		cout<<"\n";
	}
	
 return 1;
};