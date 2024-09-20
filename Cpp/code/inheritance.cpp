#include<iostream>
using namespace std;
class human
{
	public:
		void live()
		{
			cout<<"\nHuman:live";
		}
	protected:
		void earn()
		{
			cout<<"\nHuman:earning";
		}
	private:
		void learn()
		{
			cout<<"\nHuman:learning";
		}
};
//derived class: mode of inheritance <base class>
class student:public human
{
	public:
		void eat()
		{
			earn();
			cout<<"\nstudent:Eating....";
		}
	
};

int main()
{
    student s;
    s.live();
    s.eat();
    
	
 return 1;
}