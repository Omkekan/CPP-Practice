#include <iostream>
using namespace std;

class Display
{
public:
    // Function for integer
    void show(int value)
    {
        cout << "Integer value = " << value << endl;
    }

    // Function for double
    void show(double value)
    {
        cout << "Double value = " << value << endl;
    }

    // Function for character
    void show(char value)
    {
        cout << "Character value = " << value << endl;
    }
};

int main()
{
    int num;
    double decimal;
    char ch;

    cout << "Enter integer:" << endl;
    cin >> num;

    cout << "Enter decimal value:" << endl;
    cin >> decimal;

    cout << "Enter character:" << endl;
    cin >> ch;

    // Create object of Display class
    Display d;

    // Call overloaded functions
    d.show(num);
    d.show(decimal);
    d.show(ch);

    return 0;
}
