#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream input("source.txt");
  ofstream output("source_copy.txt");
  string line;
  while(getline(input,line))
  {
  	output<<line;
  	cout<<"\ncopying........";
  }
  input.close();
  output.close();
  cout<<"\nFile copied....................";
  
}