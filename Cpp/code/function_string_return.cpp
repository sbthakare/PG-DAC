#include<iostream>
using namespace std;
//create function init() that reads full name of a person and returns initials
//init("amar mukund panchal"
//retutr a.m.p.
string init(string full_name)
{
  string initial="";
  initial=initial+full_name[0];
  for(int i=1;full_name[i]!='\0';i++)
  	{
  		if(full_name[i]==' ')
  		{
  			initial=initial+'.'+full_name[i+1];
		  }
	  }
	  initial=initial+'.';
 return initial;
}
int main()
{
	string name;
	cout<<"\nYour full name:";
	getline(cin,name);
	cout<<"\nInitials are:"<<init(name);
return 0;
}