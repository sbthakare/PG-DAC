#include<iostream>
//count vowels in line of string

using namespace std;
int main()
{
	string word;
	 int flag=1;
	cout<<"\nEnter a word:\n";
	cin>>word;
	int i,j;
	for(j=0;word[j]!='\0';j++)
	{
		
	}
	j--;
	for(i=0;i<j;i++,j--)
		{
			if(word[i]!=word[j])
			{
				flag=0;
				break;
			}
		}
if(flag==1)
	cout<<"Yes";
else
	cout<<"No";

return 0;
}