
#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    double marks1, marks2, marks3;

public:

    // Function to calculate total marks
    double calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    // Function to calculate percentage
    double calculatePercentage()
    {
        // Function nesting
        return calculateTotal() / 3.0;
    }

    // Function to display student information
    void display()
    {
        cout << "Student Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
        cout << "Total Marks = " << calculateTotal() << endl;

        cout << fixed << setprecision(2);
        cout << "Percentage = " << calculatePercentage() << endl;
    }

    // Function to store input values
    void setData(string n, int r, double m1, double m2, double m3)
    {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};

int main()
{
    string name;
    int rollNo;
    double marks1, marks2, marks3;

    // Accept input
    cout << "Enter student name:" << endl;
    cin >> name;

    cout << "Enter roll number:" << endl;
    cin >> rollNo;

    cout << "Enter marks in three subjects:" << endl;
    cin >> marks1 >> marks2 >> marks3;

    // Create object
    Student s;

    // Store input values in object
    s.setData(name, rollNo, marks1, marks2, marks3);

    // Display student information
    s.display();

    return 0;
}
