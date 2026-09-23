#include<iostream>
using namespace std;
int main()
{
    for (int j=1;j<=100;j++)
	{
		if (j%3==0 && j%5==0)
        {
            cout<<"divisible by no 3 and 5 : "<<j<<"\n";
        }
        
	}	
	return 0;
}