#include <iostream>
using namespace std;


int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;

   auto aim=[](int num)
			{
				return(num%2==0);
			};
    int a= aim(num);
    if (a == 1)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    
    return 0;
}
