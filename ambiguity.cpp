#include <iostream>
using namespace std;
/*
What is ambiguity? It is Confusion of a derived or 
subclass where both the parents are giving an exact 
method to inherit and we are unclear whose method to inherit 

The way C++ resolves ambiguity is 
Subclass or the child class will write its own method and, within the method, 
would decide whose method from the parent it has to inherit. 

In C++ we can also override, that is, write our own new method, which will reject the parent's method. 
In C++ we can also activate both parents' methods by precisely writing them within a newly created method. 
In C++ we can also decide which method I want to take, only writing that method within a newly created 
*/
class Father
{
public:
    void life()
    {
        cout << "Father teaches life." << endl;
    }

    void eat()
    {
        cout << "Father eats non-veg." << endl;
    }
};

class Mother
{
public:
    void love()
    {
        cout << "Mother teaches love." << endl;
    }

    void eat()
    {
        cout << "Mother eats veg only." << endl;
    }
};

class Child : public Father, public Mother
{
	public:
		void eat()
		{
			Father::eat();//Resolving ambiguity by deciding to take property only from the father 
			Mother::eat();
			//cout<<"Child: eats chines.......everything";
		}
};

int main()
{
    Child c;

    c.life();   // No ambiguity
    c.love();   // No ambiguity

    c.eat();    // AMBIGUITY!--resolved by your call

    return 0;
}
