#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter N:";
    cin>>n;
    int a[n];

    for (int index = 0; index <n; index++)
    {
        cout<<"\n enter data at["<<index<<"]:";
        cin>>a[index];
    }
    for (int item:a)
    {
        cout<<"\n"<<item;
    }
    
    
    return 0;
}