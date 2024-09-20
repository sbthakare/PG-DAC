#include<iostream>
using namespace std;
/*
operator overload:
- gives more functionality to exisiting operators
-can overload unary/binary opertor
ex	-a unary   a-b binary
-function called on its own with symbol only
	add 2 inches  + can only add int/float
	overload + operator to do so
-operator+(inches i1,inches i2)
- inches i1,i2;
-i1+i2--------->operator+(inches i1,inches i2)
*/
class inches
{
	private:
		float value;
	public:
		void set_inches(float i)	
		{
			value=i;
		}
		void display_inches()
		{
			cout<<endl<<value<<"Inches";
		}
		friend inches operator+(inches d1,inches d2);
};

inches operator+(inches d1,inches d2)
{
  inches temp;
  temp.value=d1.value+d2.value;
  return(temp);
}

int main()
{
 inches obj1,obj2,obj3;
 obj1.set_inches(7.9);
 obj2.set_inches(11.3);
 obj3=obj1+obj2;//call: operator+(obj1,obj2);
 obj1.display_inches();
 obj2.display_inches();
 obj3.display_inches();
}