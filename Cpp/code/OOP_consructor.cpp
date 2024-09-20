#include<iostream>
using namespace std;
//create class human
//when object created one must give gender and name 
//else default name "unknown" and gender "unknown" taken
//when object removed from system should print R.I.P <name> should printed
class Human
{
	private:
	string name,gender;
	int adhar_no;
	static int population;
	public:
	Human(string n="unknown",string g="unknown")
	{
		adhar_no=++population;
		cout<<"\nconstructor called...";
		name=n;
		gender=g;
		cout<<"\nhuman with name "<<name<<" and gender "<<gender<<" created.";
		cout<<"\nAdhar card no is:"<<adhar_no;
	}

	~Human()
	{
		cout<<"\nR.I.P "<<name;
	}

};
int Human::population=202400;

int main()
{
 Human h("tony kakkar","male");
 Human h2("neha kakkar","female");
 Human h3("mad-max","male");
 return 0;
}