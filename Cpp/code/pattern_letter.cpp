#include<iostream>
using namespace std;
int main()
{
	
	int i,j,space,s;
	char ic,jc;
	for(space=5,ic='A',i=1;space>=1 && ic<='E' && i<=5;space--,ic++,i++)
	{
		//space print
		for(s=1;s<=space;s++)
			cout<<" ";
		//char print
		for(jc='A';jc<=ic;jc++)
			cout<<jc;
		//int print
		for(j=1;j<=i;j++)
			cout<<j;
		
		cout<<"\n";
	}
	
 return 1;
};