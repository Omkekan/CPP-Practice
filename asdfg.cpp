
#include<iostream>

using namespace std;

int main()
{

	for(int space=5,i=1;space>=1 && i<=5;space--,i++)
	{
 	//space print
    for(int s=1;s<=space;s++)
		cout<<" ";
    for(int j=1;j<=i;j++)
		cout<<"X "; 
    cout<<"\n";	
	}
    for(int space=1,i=1;space<=5 && i<=5;space++,i++)
	{
 	//space print
    for(int s=1;s<=space;s++)
		cout<<" ";
    for(int j=4;j>=i;j--)
		cout<<" X"; 
    cout<<"\n";	
	}

    
	return 0;
}
