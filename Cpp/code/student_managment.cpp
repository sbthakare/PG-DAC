#include<iostream>
#include<fstream>
using namespace std;
class person
{
 protected:
 string name;
 int age;
 public:
 	void set_person(string name,int age)
	 {
	 	this->name=name;
	 	this->age=age;
	 	cout<<"\n Value set";
	 }
	 void introduce()
	 {
	   cout<<"\nHello, my name is "<<name	;
	 }
};
class student:public person
{
	protected:
		int student_id;
		static int total_students;
	public:
		void set_details(string name,int age,int student_id)
		{
			total_students++;
			set_person(name,age);
			this->student_id=student_id;
			cout<<"\nTotal students so far:"<<total_students;
		}
	    void introduce()
		 {
		   cout<<"\nHello, my name is "<<name<<" and student id is:"<<student_id;
		 }
				
        static void Total_count()
        {
        	cout<<"\nTotal count is:"<<total_students;
		}
};
int student::total_students=0;
int main()
{
  student s;
  s.set_details("met",12,2134);
  s.introduce();
  student::Total_count(); //s.Total_count()----->accessing class member as an object of class
}