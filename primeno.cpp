#include<iostream>
//Write a program Check whether a given number is Prime or not.
using namespace std;
int main()
{
	int j;
	bool flag=true;//Think positively that it is a prime number. 
	for (int j = 2; j <=50; j++)
    {
        for(int i=2;i<9;i++)
        {

		    if(j%i==0)
			    {
			    flag=false;
			  
			    }
        }
	
        if(flag==true)
	        cout<<endl<<j<<"is prime";
	return 0;
    }
}
