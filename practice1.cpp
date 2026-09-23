#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int roll_no;

public:
    void data(string name, int roll_no){
        cout<<"name: "<<name;
        cout<<"\nRoll no: "<<roll_no;
    }
};



int main(){
    student s;
    string n;
    int rollno;

    getline(cin, n);
    cin>>rollno;

    s.data(n, rollno);
    return 0;
}