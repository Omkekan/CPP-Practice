#include<iostream>

using namespace std;

int main()
{
	int b;
    cout<<"enter starting no:";
    cin>>b;
    int c;
    cout<<"enter ending no:";
    cin>>c;
    if (b>c)
    {
        for(int i=c; i<=b;i++)
        cout<<i<<" ";

    }
    else if (b<c)
    {
        for(int i=c;i>=b;i--)
        cout<<i<<" ";
    }
    
    
}