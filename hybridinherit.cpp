//hybrid
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

class Employee
{
public:
    void work()
    {
        cout << "Employee is working." << endl;
    }
};

class WorkingStudent : public Student, public Employee
{
public:
    void attendOffice()
    {
        cout << "Working student attends office." << endl;
    }
};

int main()
{
    WorkingStudent ws;

    ws.name = "Rahul";

    ws.showName();       // From Person → Student
    ws.study();          // From Student
    ws.work();           // From Employee
    ws.attendOffice();   // Own function

    return 0;
}
