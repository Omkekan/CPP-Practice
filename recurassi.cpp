#include <iostream>
using namespace std;

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n + sum(n-1);

}
int main(){
        int a;
        int res;
        cout<<"enter a num: ";
        cin>>a;

        res = sum(a);

        cout<<"sum of natural numbers: "<<res;
}