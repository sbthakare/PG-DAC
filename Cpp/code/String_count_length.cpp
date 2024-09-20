#include<iostream>
//count word length

using namespace std;
int main()
{
	string word;
	cin>>word;
	int i=0;
	while(word[i]!='\0')
		i++;
	cout<<"Word: "<<word<<" is of length:"<<i;

return 0;
}