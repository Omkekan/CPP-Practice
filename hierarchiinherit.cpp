//hierarchical
#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Student is studying." << endl;
    }
};

class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teacher is teaching." << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "Employee is working." << endl;
    }
};

int main()
{
    Student s;
    s.name = "Rahul";
    s.showName();
    s.study();

    Teacher t;
    t.name = "Amar";
    t.showName();
    t.teach();

    Employee e;
    e.name = "Raj";
    e.showName();
    e.work();

    return 0;
}
