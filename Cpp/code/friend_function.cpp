#include<iostream>
using namespace std;
class Human
{
	private:
		string name;
	public:
		Human(string n)
		{
			name=n;
		}
		friend void get_name(Human obj);
};

void get_name(Human obj)
{
	cout<<"name is:"<<obj.name;
}
int main()
{
 Human obj("aman");
get_name(obj);
}