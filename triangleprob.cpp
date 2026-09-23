#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  
  cout<<"XXXXXXXX";
  int n= 5;
  for(int i=n;i>=1;i--)  
  {
  	cout<<"\n"<<'X'<<setw(i + 1)<<right<<'X';
    
  }
  cout<<"\n"<<"X";
  
    return 0;
}
