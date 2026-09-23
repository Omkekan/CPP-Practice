#include <iostream>
using namespace std;
/*
Constructor:
It is a function with the exact identifier of the class itself has no return type. 
Called on its own whenever an object is created 

use for one of the three reasons:
First, giving initial value :Default constructor 
Giving user-supplied parameterized value :Parameterize constructor. 
Making a copy of a pre-existing object :Copy constructor 
A constructor is a special member function used for initializing an object.
Rules:
Same name as class
No return type
Automatically called when object is created

*/

class Human
{
private:
    string name;
    int age;
    string gender;

public:
	Human()//First, giving initial value :Default constructor 
{
		cout<<"\nDefault constructor call  ";
		name="un-named";
		age=0;
		gender="unknown";
	}

    // Method to set all details
    Human(string name, int age, string gender)
    //Giving user-supplied parameterized value :Parameterize constructor. 
    {
    	cout<<"\nParameterized constructor call  ";
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    Human(const Human &h)
    //Giving user-supplied parameterized value :Parameterize constructor. 
    {
    	cout<<"\nCopy constructor call  ";
        this->name = h.name;
        this->age = h.age;
        this->gender = h.gender;
    }


    // Method to display details
    void display_detail()
    {
        cout << "\nName   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Gender : " << gender << endl;
    }
 // Method to check voting eligibility
    void can_vote()
    {
        if (age >= 18)
        {
            cout << "Yes, you can vote." << endl;
        }
        else
        {
            cout << "You cannot vote." << endl;
        }
    }
};

int main()
{
    Human h1;
    h1.display_detail();//default
    Human h2("wonder woman",401,"female");//parameterized
    h2.display_detail();
    Human h3(h2);//copy constructor
    h3.display_detail();


    return 0;
}
