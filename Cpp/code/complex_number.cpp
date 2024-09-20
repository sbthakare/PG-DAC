#include<iostream>
#include<fstream>
using namespace std;
class complex
{
	private:
		float rel,img;

	 public:
	   	void set_complex(float rel,float img)
	   	{
	   		this->rel=rel;
	   		this->img=img;
	   		cout<<"\n set to "<<rel<<"+"<<img<<"i";
		   }
		   
	   	void display_complex()
	   	{
	   		cout<<"\n set to "<<rel<<"+"<<img<<"i";
		}
		friend complex operator+(complex no1,complex no2);
};

complex operator+(complex no1,complex no2)
{
	complex temp;
	temp.rel=no1.rel+no2.rel;
	temp.img=no1.img+no2.img;
	return (temp);
}
int main()
{
  complex n1,n2,n3;
  n1.set_complex(3,6);
  n2.set_complex((float)1/2,4);
  n3=n1+n2;
  n3.display_complex();
  
}