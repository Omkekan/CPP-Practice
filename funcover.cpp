#include <iostream>
using namespace std;

class display{
    public:
    void show(int val){
        cout<<"int val= "<<val<<endl;
    }
    void show(double val){
        cout<<"double val: "<<val<<endl;
    }
    void show(char val){
        cout<<"char val: "<<val<<endl;
    }
};

int main(){
    int a;
    double b;
    char c;

    cout<<"enter int: ";
    cin>>a;

    cout<<"enter deci: ";
    cin>>b;

    cout<<"enter char: ";
    cin>>c;

    display d;
    d.show(a);
    d.show(b);
    d.show(c);

    return 0;
}