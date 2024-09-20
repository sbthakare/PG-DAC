#include<iostream>
//count frequency of a character given by usaer in a line of string
//this is a test line
//character:i------>3

using namespace std;
int main()
{
	string line;
	int count=0;
	cout<<"\nEnter aline of string:\n";
	getline(cin,line);
	char c;
	cout<<"\nEnter character to count: ";
	cin>>c;
	for(int i=0;line[i]!='\0';i++)
	{
		if(line[i]==c)
			count++;
	}
	cout<<"\n"<<c<<" repeated for "<<count<<" times.";

return 0;
}