#include<iostream>
//check if diagonal matrix or not

using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,flag=1;//flag=1 set/yes flag=0 reset/no
	cout<<"Enter size of Matrix\n";
	cin>>rows>>columns;//x-axis then y-axis
	if(rows==columns)
	{
		for(r=0;r<rows;r++)
	   {
	 	for(c=0;c<columns;c++)
	 	{
	 		cout<<"\nEnter element at ["<<r<<"] ["<<c<<"]:";
	 		cin>>m[r][c];
		 }
	   }
		for(r=0;r<rows;r++)
		 {
		 	for(c=0;c<columns;c++)
		 	{
		 		if((r==c && m[r][c]==0)||( r!=c && m[r][c]!=0))
		 			{
		 				flag=0;//not a diagonal
		 				break;
					 }
			 }
		 }
		 if(flag==1)
		 	cout<<"\nYes diagonal.";
		else
			cout<<"\nNot diagonal.";
		cout<<"\nMatrix \n";
		for(r=0;r<rows;r++)
		 {
		 	for(c=0;c<columns;c++)//all columns in a row
		 	{
		 		cout<< m[r][c]<<"\t";		 
			}
			cout<<"\n";//endl
		 }

}
else
	cout<<"\nNot a square matrix";
return 0;
}