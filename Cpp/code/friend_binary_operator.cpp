#include<iostream>
using namespace std;
/*
implement 2 classes 
1 inch--has method set_inch
2 cm----has methid set_cm
use friend function to add inches and cm and print total in inches and cm both

*/
class cm;
class inches
{
	private:
		float value;
	public:
		void set_inches(float i)	
		{
			value=i;
		}
		friend void add(inches obj_i,cm obj_cm);
};
class cm
{
	private:
		float value;
	public:
		void set_cm(float i)	
		{
			value=i;
		}
		friend void add(inches obj_i,cm obj_cm);
};

void add(inches i,cm c)
{
	cout<<"\nTotal in cm:"<<(i.value*2.5+c.value);
	cout<<"\nTotal in inches:"<<(i.value+c.value/2.5);
}

int main()
{
 inches obj_in;
 cm obj_cm;
 obj_in.set_inches(36);
 obj_cm.set_cm(17);
 add(obj_in,obj_cm);
}