#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
		int rollno;
		string name,gender;

	 public:
	   	void set_student(int rollno,string name,string gender)
	   	{
	   		cout<<"\nset of student called";
	   		this->rollno=rollno;
	   		this->name=name;
	   		this->gender=gender;
		   }
		   
	   	void display()
	   	{
	   		cout<<"\n hi i am "<<rollno<<" and my name is "<<name;
	   		cout<<"\ndisplay of student";
		   }
};
class department
{
//	private:
		
	public:
		student s;
		void set_dept(int rollno,string name,string gender)
		{
			cout<<"\nset of dept called";
			s.set_student(rollno,name,gender);
			
		}
		void display()
		{
			s.display();
			cout<<"\ndisplay of dept";
		}
};


int main()
{
  department d;
  d.set_dept(1,"abcd","m");
  d.display();
  d.s.set_student(2,"xyz","f");
  d.s.display();
  
}