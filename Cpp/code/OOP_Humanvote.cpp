#include<iostream>
using namespace std;
//defin class human :name,gender,age
//with method to set_data(): name and gender
//method:intro():to print hi i am <name>,a <gender>
//vote() will print yes you can iff age>=18 else can not vote  printed
class Human
{
	private:
	string name,gender;
	int age;
	public:
	void set_data(string n,string g,int a)	
	{
		name=n;
		gender=g;
		age=a;
	}
	void intro()
	{
		cout<<endl<<"hi i am "<<name<<", a "<<gender;
	}
  void vote()
  {
  	if(age>=18)
  		cout<<"\nat "<<age<<" can vote";
  	else
  		cout<<"\nat "<<age<<" can not vote";
  }	
};

int main()
{
 Human h;
 string n,g;
 int a;
 cout<<"\nEnter name and gender and age:";
 cin>>n>>g>>a;
 h.set_data(n,g,a);
 h.intro();
 h.vote();
return 0;
}