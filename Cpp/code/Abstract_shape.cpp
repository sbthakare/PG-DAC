#include<iostream>
#include<fstream>
using namespace std;
class shape
{
 public:
   	virtual void area()
   	{
   		
	   }
   	virtual void perimeter()
   	{
   		
	   }
};

class circle:public shape
{
	protected:
		float r;

	public:
		void set_r(float r)
		{
			this->r=r;
		}
	    void area()
		 {
		   cout<<"\nArea of circle is:"<<(3.14*r*r);
		 }
	/*	void perimeter()
		 {
		   cout<<"\nPerimeter of circle is:"<<(2*3.14*r);
		 }		*/
    };
    
class rectangle:public shape
{
	protected:
		float l,b;

	public:
		void set_l_b(float l,float b)
		{
			this->l=l;
			this->b=b;
		}
	    /*void area()
		 {
		   cout<<"\nArea of reactangle is:"<<(l*b);
		 }*/
		void perimeter()
		 {
		   cout<<"\nPerimeter of rectangle is:"<<(2*(l+b));
		 }		
    };
    
int main()
{
  circle obj_c;
  rectangle obj_r;
  obj_c.set_r(12.3f);
  obj_c.area();
  
  obj_r.set_l_b(12.3f,10.0f);
  obj_r.perimeter();
  
}