#include<iostream>
using namespace std;

class human
{
	public:
		void live()
		{
			cout<<"\nHuman:live";
		}
		
};
//derived class: mode of inheritance <base class>
class student:public human
{
	public:
	void study()
	{
		cout<<"\nStudent: study..";
	}
	
};

class Job:public human
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
  student obj_s;
  obj_j.live();
  obj_j.working();
  obj_s.live();
  obj_s.study();
	
 return 1;
}