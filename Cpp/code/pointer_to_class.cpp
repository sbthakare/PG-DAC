#include<iostream>
using namespace std;
class Human
{
	public:
		string name;
		string gender;
		void live()
		{
			cout<<"hello";
		}
};

int main()
{
	Human h;
	Human *p;
	p=&h;

	p->live();//to access member from pointer to object -> is must
	
	
}