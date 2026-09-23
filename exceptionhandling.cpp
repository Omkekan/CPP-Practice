#include <iostream>
using namespace std;

int main()
{
    int no1, no2;

    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
 try
    {
        if (no2 == 0)
        {
            throw no2;
        }

        int answer = no1 / no2;

        cout << "Answer = " << answer << endl;
    }
 catch (int value)
    {
        cout << "Error: Division by zero is not allowed. AS NUMBER 2 IS " << value<<endl;
    }

    cout << "Program continues normally..." << endl;

    return 0;
}
