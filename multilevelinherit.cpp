//mutilevel
#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    string gender;

    void showName()
    {
        cout << "Name: " << name << endl;
        
    }
    void showgender(){
        cout << "gender: " << gender << endl;
    }
};

class Student : public Human
{
public:
    string degree;

    void showdegree()
    {
        cout << "Degree: " << degree << endl;
    }
};

class Employee : public Student
{
public:
    float salary;

    void showsalary()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    cout<<"enter name: ";
    getline(cin, e.name);

    cout<<"enter gender: ";
    cin>>e.gender;

    cin.ignore();

    cout<<"enter degree: ";
    getline(cin, e.degree);

    cout<<"enter salary: ";
    cin>>e.salary;

    

    e.showName();
    e.showgender();
    e.showdegree();
    e.showsalary();

    return 0;
}
