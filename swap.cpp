#include <iostream>
using namespace std;

// 1. Pass by Value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 2. Pass by Reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 3. Pass by Address / Pointer
void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nOriginal values:";
    cout << "\na = " << a << ", b = " << b << endl;

    // --------------------------------
    // PASS BY VALUE
    // --------------------------------
    int x = a;
    int y = b;

    swapByValue(x, y);

    cout << "\nAfter Pass by Value:";
    cout << "\nx = " << x << ", y = " << y << endl;


    // --------------------------------
    // PASS BY REFERENCE
    // --------------------------------
    int p = a;
    int q = b;

    swapByReference(p, q);

    cout << "\nAfter Pass by Reference:";
    cout << "\np = " << p << ", q = " << q << endl;


    // --------------------------------
    // PASS BY ADDRESS
    // --------------------------------
    int m = a;
    int n = b;

    swapByAddress(&m, &n);

    cout << "\nAfter Pass by Address:";
    cout << "\nm = " << m << ", n = " << n << endl;

    return 0;
}
