#include<iostream>
using namespace std;
class A
{
	public:
		A(int a)
		{
			cout<<"\nA contructor called:"<<a;
		}
};
class B:public A
{
	public:
		B(int a,int b):A(a)
		{
			cout<<"\nB contructor called:"<<b;
		}
};
class C:public B
{
	public:
		C(int a,int b,int c):B(a,b)
		{
			cout<<"\nC contructor called:"<<c;
		}
};
int main()
{
	C obj(10,100,1000);//will call C()--->B()---->A()
 	return 1;
}