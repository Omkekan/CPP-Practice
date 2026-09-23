#include <iostream>
using namespace std;

class B;  // Forward declaration

class A
{
 private:   
	int x;

public:
    A()
    {
        x = 10;
    }

    friend void display(A o_a, B o_b);
};

class B
{
  private:
    int y;

public:
    B()
    {
        y = 20;
    }

    friend void display(A o_a, B o_b);
};

void display(A o_a, B o_b)
{
    cout << "A x = " << o_a.x << endl;
    cout << "B y = " << o_b.y << endl;
}

int main()
{
    A a;
    B b;

    display(a, b);

    return 0;
}
