#include <iostream>
#include <string> // It is good practice to include this when using std::string
using namespace std;

class Employee {
private:
    string name;
    string D_joining;
    float salary;
    string address;

public:
    // This method now collects data for exactly ONE employee
    void emp_info() {
        cout << "Enter name: ";
        getline(cin, name);
        
        cout << "Enter Date of joining: ";
        getline(cin, D_joining);
        
        cout << "Enter Salary: ";
        cin >> salary;
        
        // Clear the newline left in the buffer by 'cin >> salary'
        cin.ignore(); 
        
        cout << "Enter address: ";
        getline(cin, address);
    }

    // This method prints the data for exactly ONE employee
    void emp_details() {
        cout << name << "\t" << D_joining << "\t\t" << salary << "\t" << address << endl;
    }
};

int main() {
    int num_employees;
    
    cout << "Enter the total number of employees: ";
    cin >> num_employees;
    
    // Clear the newline left by the first cin so the first getline() works
    cin.ignore(); 

    // Create an array of objects
    // Assuming a maximum of 100 employees for this example
    Employee e[100]; 

    // 1. Loop to take input for all employees
    for (int j = 0; j < num_employees; j++) {
        cout << "\n--- Enter details for Employee " << j + 1 << " ---" << endl;
        e[j].emp_info();
    }
    
    // 2. Loop to display all employees
    cout << "\n------------------------------------------------------------\n";
    cout << "Name\tDate of Joining\t\tSalary\tAddress\n";
    cout << "------------------------------------------------------------\n";
    
    for (int j = 0; j < num_employees; j++) {
        e[j].emp_details();
    }

    return 0;
}