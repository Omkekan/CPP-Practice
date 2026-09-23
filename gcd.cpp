#include <iostream>
using namespace std;

// 1. Compute the GCD using recursion
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// 2. Find the LCM
int findLCM(int a, int b) {
    // Formula: (a * b) / GCD
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1 = 12, num2 = 18;
    cout << "GCD: " << findGCD(num1, num2) << "\n";
    cout << "LCM: " << findLCM(num1, num2) << "\n";
    return 0;
}