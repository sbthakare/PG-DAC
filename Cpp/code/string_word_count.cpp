#include<iostream>
//count total words in a line 

using namespace std;
int main()
{
	string line;
	int count=0;
	getline(cin,line);
	for(int i=0;line[i]!='\0';i++)
	{
		if(line[i]==' ')
			count++;
	}
	cout<<"\nTotal words:"<<count+1;

return 0;
}