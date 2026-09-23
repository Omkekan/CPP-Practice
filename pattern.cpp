#include <iostream>
using namespace std;

int main(){
    for (int space=1 ,i = 5;space>=5, i>=1; space++, i--)
    {
        for (int s = 5; s>=space; s--)
        {
            cout<<" ";
        }
        
        for (int j = i; j<=5; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        
    }
    
}