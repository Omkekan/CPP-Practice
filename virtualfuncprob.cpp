#include <iostream>
using namespace std;

class Operation
{
public:
    // Declare pure virtual function add()
    virtual void add(int x, int y)= 0;

    // Declare pure virtual function sub()
    virtual void sub(int x, int y)=0;
};

class Calculator : public Operation
{
public:

    // Override add() and display addition
    void add(int x, int y) override
    {
        cout << "\nAddition = " << x+y;
    }

    // Override sub() and display subtraction
    void sub(int x, int y) override
    {
        cout << "\nSubtraction = " << x - y;
    }
};

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Calculator obj;

    // Parent pointer referring to Child object
    Operation *p = &obj;

    p->add(a, b);

    p->sub(a, b);

    return 0;
}
