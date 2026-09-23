#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int counter = 1; // Starts at 1 and keeps growing
    
    cout << "Floyd's Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << counter << " ";
            counter++; // Increment for the very next print
        }
        cout << endl; // Move to the next line after the row finishes
    }
    return 0;
}