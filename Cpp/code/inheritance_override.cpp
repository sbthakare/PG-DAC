#include<iostream>
using namespace std;
//override:
//when child /subclass recodes method of parent/superclass 
//then it overrides parent method and in the process
//rejects inheritance
//need:
//with ref to time improvement and changes is need ,one must override
//old methods with new
class human
{
	public:
		void live()
		{
			cout<<"\nHuman:live";
		}
		
		void earn()
		{
			cout<<"\nHuman:earning";
		}
		void eat()
		{
			cout<<"\nHuman:bhaji chapati";
		}
};
//derived class: mode of inheritance <base class>
class student:public human
{
	public:
	void eat()
	{
		cout<<"\nStudent:   pizza/pasta/rolls";
	}
	
};

int main()
{
    student s;
    s.live();
    s.eat();

	
 return 1;
}