#include<iostream>
using namespace std;
//A gets activated 2 times via B and C
//to stop this we need virtual
//abstract class:concept of virtual base classs
class A
{
	public:
		A()
		{
			cout<<"\nA contructor called";
		}
};
class B:virtual public A
{
	public:
		B()
		{
			cout<<"\nB contructor called";
		}
};
class C:public virtual A
{
	public:
		C()
		{
			cout<<"\nC contructor called";
		}
};
class X:public C,public B
{
	public:
		X()
		{
			cout<<"\nX contructor called";
		}
};

int main()
{
  X obj;
	
 return 1;
}