#include<iostream>
using namespace std;
//accept a password from user and say valid iff
// has atleast one upper case        char>='A' && char<='Z'
//has atleast one lowercase
//has atleast one digit
//has atleast one symbol
//total length atleast 8+
//print why password was rejected
//input:aA@1-------------->too short min length is 8 neede
//input:amar here -------->no capital no digit detected

bool evaluator(string pass)
{
 int countA,counta,countd,counts,length;
 countA=counta=countd=counts=length=0;
for(int i=0;pass[i]!='\0';i++)
  	{
  		char c=pass[i];
  		if(c>='A' && c<='Z')
  			countA++;
  		else if (c>='a' && c<='z')
  			counta++;
  		else if (c>='0' && c<='9')
  			countd++;
  		else
  			counts++;
  	length++;
	}
	if( counta>0 && countA>0 && counts>0 && countd>0 && length>=8)	
	{
				  return (true);
	}
	else
	{
		if(countA==0)
			cout<<"\n* atleast one capital needed";
		if(counta==0)
			cout<<"\n* atleast one lower needed";
		if(countd==0)
			cout<<"\n* atleast one digit needed";
		if(counts==0)
			cout<<"\n* atleast one symbol needed";
		if(length<8)
			cout<<"\n* minimum length needed is 8";
		return(false);
	}
	  
}
int main()
{
	string password;
	cout<<"\nEnter your password:";
	cin>>password;
	bool response=evaluator(password);
	if(response==1)
		cout<<"\nPassword accepted";
	else
		cout<<"\nPassword rejected";
	return 0;
}