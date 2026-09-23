/* Assign and print the roll number, phone number and address of two students having names 
"Sam" and "John" respectively by creating two objects of the class 'Student'.*/

#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int roll_no = 0;
    int mark1 = 0, mark2 = 0, mark3 = 0;

    public:
    this -> name = name;
    this -> roll_no = roll_no;
    this -> mark1= mark1;

    float avgmarks(){

    }
    float totalmarks(){

    }
    void display(){

    }
};

int main(){
    student s;
    string name;
    int roll_no;
    float mark1, mark2, mark3;


    s.avgmarks(mark1, mark2, mark3);
    s.totalmarks(mark1, mark2, mark3);
    s.display();
    return 0;
}