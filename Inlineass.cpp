#include <iostream>
using namespace std;

inline int sq(int a){
    return a*a;

}

int main(){
    int num;
    int s;

    cout<<"enter a number: ";
    cin>>num;

    s = sq(num);
    cout<<"square: "<<s;

    return 0;
}