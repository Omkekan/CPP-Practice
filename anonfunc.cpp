#include <iostream>
using namespace std;


int main()
{
    
   auto add=[](int no1,int no2)
			{
				return(no1+no2);
			};
    cout<<"Addition is:"<<add(11,22);
    return 0;
}