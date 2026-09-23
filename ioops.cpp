#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n=5;
  for(int i=1;i<=5;i++)  
  {
  	cout<setw(n)<<string(i,'x')<<"\n";
  	//               1            X      
  	//               2            XX     
	 //              3            XXX    
  }
    return 0;
}
