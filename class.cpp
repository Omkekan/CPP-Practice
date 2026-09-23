#include <iostream>
using namespace std;

class human{
    private:
    string name;
    int age;
    string gender;

    public:
    void setdetails(string n, int a,string g){
        name=n;
        age = a;
        gender =g;
    }

    void vote(){
         if (age >= 18)
        {
            cout << "Yes, you can vote." << endl;
        }
        else
        {
            cout << "You cannot vote." << endl;
        }

        

    }
     void display(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
        
     }

};

int main(){
    string n;
    int a;
    string g;
    

    cout<<"your Name: ";
    getline(cin, n);
    cout<<"your age: ";
    cin>>a;
    cout<<"your gender: ";
    cin>>g;
    human h;
    h.setdetails(n, a, g);
    h.display();
    h.vote();


    return 0;
}