#include<iostream>
using namespace std;

class human
{
	public:
		void live()
		{
			cout<<"\nHuman:live";
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
	void study()
	{
		cout<<"\nStudent:study..";
	}
	
};
class Job:public student
{
	public:
		void working()
		{
			cout<<"\nWorking for money...";
		}
};

int main()
{
  Job obj;
  obj.live();
  obj.eat();
  obj.study();
  obj.working();

	
 return 1;
}