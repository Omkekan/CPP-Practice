//multiple
#include <iostream>
using namespace std;

class Teacher
{
public:
    void teach()
    {
        cout << "Teacher can teach." << endl;
    }
};

class Researcher
{
public:
    void research()
    {
        cout << "Researcher can do research." << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void conductClass()
    {
        cout << "Professor conducts class." << endl;
    }
};

int main()
{
    Professor p;

    p.teach();          // From Teacher
    p.research();       // From Researcher
    p.conductClass();   // Own function

    return 0;
}
