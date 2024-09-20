#include<iostream>
using namespace std;
//code power() that read x and yt and returns x rest to y
//power(2,3)------------>8
//use recursion and if y not given let it be 1 
int power(int x,int y=1)
{
	if(y==0)
		return 1;
	else
		return(x*power(x,y-1));
}
int main()
{
int no=2,p=3;
cout<<"\n"<<no<<" rest to "<< p<<":"<<power(no);
return 0;
}
