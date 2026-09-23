#include <iostream>
using namespace std;
/*
The lifespan of an object depends on where it is declared. 
If an object is declared in a local span, 
it would be removed as soon as the local span is over. 
Scope of object :A scope of an object is limited to its local control area. 
*/
class Human
{
private:
    string name;
public:
 Human(string name)
    
    {
        this->name = name;
     	cout<<"\nA human called "<<this->name<<" is created.";
    }
  
	~Human()
	{
		cout<<"\nR.I.P::::::::"<<name;
	}
};

int main()
{
	Human h1("Shaktiman");
	Human h2("deadpool");
	Human h3("Hulk");
//In this we will use a stack memory so first Shaktiman goes in, then Deadpool, and then Hulk. 
//At the time of destructor call, first the topmost is removed (that is, Hulk), followed by 
//Deadpool, followed by Shaktiman. 
    return 0;
}
