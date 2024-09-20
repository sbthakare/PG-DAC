#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string name,native;
   cout<<"Enter name:";
   cin>>name;
  ofstream out("d:\\"+name+".txt");
  cout<<"\nso "<<name<<"where are you from ?\n";
  cin>>native;
  out<<"Name is "<<name<<" and native is "<<native;
  out.close();
  cout<<"\nWritten to file and saved..";
}