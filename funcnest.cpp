#include <iostream>
#include <iomanip>
using namespace std;

class student{

    private:
    string stu_name;
    int roll_no;
    float marks1;
    float marks2;
    float marks3;

    public:

    float calcu(){

        return marks1+marks2+marks3;

    }
    float calper(){
        return calcu() / 3.0;

    }

    void display(){
        cout<<"Student name: "<<stu_name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Total Marks: "<<calcu() <<endl;
        cout<<"Percentage: "<<calper() ;
    }

    void setdata(string n, int r, float m1, float m2, float m3){
        stu_name=n;
        roll_no=r;
        marks1=m1;
        marks2=m2;
        marks3=m3;

    }

};

int main(){
    
    string name;
    int rollno;
    float marks1;
    float marks2;
    float marks3;

    cout<<"Student Name: ";
        getline(cin, name);
        cout<<"Roll no: ";
        cin>>rollno;
        cout<<"Marks1: ";
        cin>>marks1;
        cout<<"marks2: ";
        cin>>marks2;
        cout<<"marks3: ";
        cin>>marks3;

    
    student s;
    s.setdata(name, rollno, marks1, marks2, marks3);
    s.display();

    return 0;
}