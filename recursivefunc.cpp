#include <iostream>
using namespace std;

int gcd(int no1, int no2){
    if (no2==0)
    {
        return no1;
    }
    else{
        return gcd(no2, no1%no2);
    }
}


int main(){
    cout<<"enter no 1: ";
    int a;
    cin>>a;

    cout<<"enter no 2: ";
    int b;
    cin>>b;

    cout<<gcd(a, b);

    return 0;
}

/*Start
Accept two numbers no1 and no2.
Find the remainder when no1 is divided by no2.
Replace no1 with no2.
Replace no2 with the remainder.
Repeat steps 3–5 until the second number becomes zero.
The first number is the GCD.
Return the GCD.
Stop.
*/