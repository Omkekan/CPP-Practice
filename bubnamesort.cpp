#include <iostream>
#include <string>
//Take a line of string. Print the frequency of every alphabet. 
using namespace std;

int main()
{
    string a[]={"om", "aditya", "rahul", "gaurav"};
    cout<<"Array:";
    for(string i:a)
    	cout<<i<<", ";
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    	{
    		for(int j=0;j<sizeof(a)/sizeof(a[0])-1;j++)
    		{
    			if(a[j]>a[j+1])
    			{
    				string temp=a[j];
    				a[j]=a[j+1];
    				a[j+1]=temp;
				}
			}
		}
	cout<<"\nSorted Array:";
    for(string i:a)
    	cout<<i<<", ";	
    
    
    return 0;
}
