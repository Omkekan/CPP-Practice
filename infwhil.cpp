#include<iostream>
/*Modify the above program to accept numbers till the user hits 0 
and keep on counting whether the entered number by the user is even or odd. */
using namespace std;
int main()
{
	int number;
	while(true)
	{
		cout<<"\nEnter number or 0 to stop:";
		cin>>number;
        if(number<=0)
			{
                cout<<"\nEnding the system. ";
				break;
            }
        else if (number%2==0)
            {
                cout<<"\nnumber is even";
            
            }
        else
            {
                cout<<"\nnumber is odd";
            }

	}
	cout<<"outside loop :bye bye";
	return 0;
}
