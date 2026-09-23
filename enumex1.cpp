#include <iostream>
using namespace std;

// Enum representing pizza sizes
enum Pizza
{
    personal = 100,
    medium = 200,
    large = 300
};

int main()
{
    int choice;
    float price, cgst, sgst, total;

    // Display pizza options
    cout << "========== PIZZA MENU ==========" << endl;
    cout << "1. Personal Pizza - Rs. " << personal << endl;
    cout << "2. Medium Pizza  - Rs. " << medium << endl;
    cout << "3. Large Pizza   - Rs. " << large << endl;

    // Ask user to select
    cout << "\nEnter your choice (1-3): ";
    cin >> choice;

    // Select price
    switch(choice)
    {
        case 1:
            price = personal;
            break;

        case 2:
            price = medium;
            break;

        case 3:
            price = large;
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    // Calculate GST
    cgst = price * 2.5 / 100;
    sgst = price * 2.5 / 100;

    total = price + cgst + sgst;

    // Display bill
    cout << "\n========== FINAL BILL ==========" << endl;
    cout << "Pizza Price : Rs. " << price << endl;
    cout << "CGST (2.5%) : Rs. " << cgst << endl;
    cout << "SGST (2.5%) : Rs. " << sgst << endl;
    cout << "-------------------------------" << endl;
    cout << "Total Bill  : Rs. " << total << endl;

    return 0;
}