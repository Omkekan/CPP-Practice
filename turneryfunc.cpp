#include <iostream>
using namespace std;


int main()
{
    int a,b,c,d;
   cin>>a>>b>>c;
   d=(a>b)?
        ((a>c)?a:c):
        ((b>c)?b:c);
    cout<<"biggest no: "<<d;
    return 0;
}