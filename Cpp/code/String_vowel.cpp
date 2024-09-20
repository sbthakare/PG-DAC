#include<iostream>
//count vowels in line of string

using namespace std;
int main()
{
	string line;
	int count=0;
	cout<<"\nEnter aline of string:\n";
	getline(cin,line);

	for(int i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
			count++;
	}
	cout<<"\n Vowels "<<count<<" in line";

return 0;
}