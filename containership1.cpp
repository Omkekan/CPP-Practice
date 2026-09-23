#include <iostream>
using namespace std;

class Address
{
    string city;
    int pincode;

public:
    // write input method
    void input_address()
    {
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter pincode: ";
        cin >> pincode;
    }

    // write display method
    void display_address()
    {
        cout << "City: " << city << endl;
        cout << "Pincode: " << pincode << endl;
    }
};

class Student
{
    string name;
    int roll_no;

    Address a;   // HAS-A relationship

public:
    // write input method
    void input_student()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        a.input_address();   // delegating to Address object
    }

    //write display method
    void display_student()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        a.display_address();   // delegating to Address object
    }
};

int main()
{
    Student s;

    s.input_student();
    s.display_student();

    return 0;
}
