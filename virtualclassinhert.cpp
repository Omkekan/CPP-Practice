/*pure virtual function
In this the base class will not carry any code but 
just a compulsion that any class inheriting this must 
implement this function. 
A class which has one or more virtual methods is also called an abstract class. 
This class is used just as a framework so that somebody can follow the framework and implement it in their own way. 
*/
#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void fun() = 0;   // Pure virtual function
};

class Child1 : public Parent
{
public:
    void fun() override
    {
        cout << "\nChild is having fun:online social media";
    }
};
class Child2 : public Parent
{
public:
    void fun() override
    {
        cout << "\nChild is having fun:coding";
    }
};
int main()
{
    Child1 obj1;
    Child2 obj2;

    Parent *p = &obj1;
    p->fun();
    p = &obj2;
    p->fun();

    return 0;
}
