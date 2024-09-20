#include<iostream>
using namespace std;

class vector
{
	private:
		float v[100];
		int size;
	public:
		void set_vector(int a[],int n)	
		{
			size=n;
			for(int i=0;i<size;i++)
			{
				v[i]=a[i];
			}
		}
		
		void display()
		{
			cout<<"\nVector has:";
			for(int i=0;i<size;i++)
			{
				cout<<v[i]<<",";
			}
		}
		
		friend void operator-(vector &obj);
	
};

void operator-(vector &obj)
{
  for(int i=0;i<obj.size;i++)
  		obj.v[i]=obj.v[i]*-1;
}

int main()
{
 vector obj;
 int t[]={11,-22,33,44,-55,66,77};
 int n=7;
 obj.set_vector(t,n);
 obj.display();
 
 
-obj;//all values in vector should be then -ve and -ve should be +ve
 obj.display();
 return 0;
 
 
}