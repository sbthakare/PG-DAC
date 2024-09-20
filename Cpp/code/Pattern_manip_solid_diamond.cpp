#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int space=5,i=1;i<=9;space--,i=i+2)
    	cout<<setw(space)<<setfill(' ')<<""<<setw(i)<<setfill('X')<<""<<endl;
    for(int space=2,i=7;i>=1;space++,i=i-2)
    	cout<<setw(space)<<setfill(' ')<<""<<setw(i)<<setfill('X')<<""<<endl;
			
		
	
 return 1;
};