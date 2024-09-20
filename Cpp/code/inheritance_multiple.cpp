#include<iostream>
using namespace std;
//mutiple with different operations:
class human
{
	public:
		void live()
		{
			cout<<"\nHuman:live";
		}
		
};
//derived class: mode of inheritance <base class>
class student
{
	public:
	void study()
	{
		cout<<"\nStudent: study..";
	}
	
};

class Job:public human,public student
{
	public:
		void working()
		{
			cout<<"\nJob: Working for money...";
		}
};

int main()
{
  Job obj_j;
  obj_j.live();
  obj_j.working();
  obj_j.study();
	
 return 1;
}