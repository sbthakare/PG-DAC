#include<iostream>
using namespace std;

void welcome(string name="my dear",string native="india")
{
	cout<<"\nWelcome "<<name<<" so you are from "<<native;
}

int main()
{
welcome("amar","mumbai");
welcome("amar");
welcome();
return 0;
}