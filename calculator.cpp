#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b){
        return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }
    int mul(int a, int b){
        return a*b;
    }
    float div(float a, float b){
        return a/b;
    }

};

int main(){
    
    int a, b;
    cout<<"enter tow numbers: ";
    cin>>a>>b;

    calculator c;

    c.add(a,b);
    c.div(a,b);
    c.mul(a,b);
    c.sub(a, b);
    
    cout<<"addition "<<c.add(a,b)<<endl<<"division "<<c.div(a,b)<<endl<<"multiplication "<<c.mul(a,b)<<endl<<"subtraction "<<c.sub(a, b);
    
    return 0;
}


