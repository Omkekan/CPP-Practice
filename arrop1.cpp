#include<iostream>
//Transpose of a matrix.  
using namespace std;
int main()
{
	int rows,columns;
	cout<<"Enter dimensions of 2D array\n";
	cin>>rows>>columns;
	int m[rows][columns];
	//reading
	for(int r=0;r<rows;r++)
	{
	  for(int c=0;c<columns;c++)
		{
			cout<<"Enter data for m ["<<r<<"]["<<c<<"]:";
			cin>>m[r][c];
		}
	}
	//printing
	cout<<"\n Matrix has:\n";
	for(int r=0;r<rows;r++)
	{
	  for(int c=0;c<columns;c++)
		{
			cout<<m[r][c]<<"\t";
		}
		cout<<endl;//In order to move to the next line 
	}

	return 0;
}