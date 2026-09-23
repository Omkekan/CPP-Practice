#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    // ---------- Data members ----------
    string accountNumber;
    string name;
    string address;
    string accountType;
    double balance;
    int numTransactions;

    static int nextAccountNumber;  // used to generate BA1000, BA1001, ...
    static int totalTransactions;  // running count across ALL accounts

    // ---------- 1. Generate a unique account number ----------
    string generateAccountNumber() {
        string accNo = "BA" + to_string(nextAccountNumber);
        nextAccountNumber++;
        return accNo;
    }

public:
    BankAccount(const string &depName, const string &depAddress,
                const string &depType, double openingBalance) {
        name = depName;
        address = depAddress;
        accountType = depType;
        balance = openingBalance;
        numTransactions = 0;
        accountNumber = generateAccountNumber();
    }

    string getAccountNumber() const { return accountNumber; }
    string getName() const { return name; }

    // ---------- 2. Display information and balance ----------
    void displayInfo() const {
        cout << "\n----------------------------------------\n";
        cout << "Account Number : " << accountNumber << "\n";
        cout << "Name           : " << name << "\n";
        cout << "Address        : " << address << "\n";
        cout << "Account Type   : " << accountType << "\n";
        cout << fixed << setprecision(2);
        cout << "Balance        : Rs. " << balance << "\n";
        cout << "Transactions   : " << numTransactions << "\n";
        cout << "----------------------------------------\n";
    }

    // ---------- 3. Deposit ----------
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit amount must be positive.\n";
            return;
        }
        balance += amount;
        numTransactions++;
        totalTransactions++;
        cout << "Rs. " << fixed << setprecision(2) << amount << " deposited successfully.\n";
    }

    // ---------- 4. Withdraw ----------
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive.\n";
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal denied.\n";
            return;
        }
        balance -= amount;
        numTransactions++;
        totalTransactions++;
        cout << "Rs. " << fixed << setprecision(2) << amount << " withdrawn successfully.\n";
    }

    // ---------- 5. Change address ----------
    void changeAddress(const string &newAddress) {
        address = newAddress;
        cout << "Address updated successfully.\n";
    }

    static int getTotalTransactions() { return totalTransactions; }
};

// Initialize static members
int BankAccount::nextAccountNumber = 1000;
int BankAccount::totalTransactions = 0;

// Helper: find an account's index by its account number
int findAccountIndex(const vector<BankAccount> &accounts, const string &accNo) {
    for (size_t i = 0; i < accounts.size(); i++) {
        if (accounts[i].getAccountNumber() == accNo) return static_cast<int>(i);
    }
    return -1;
}

int main() {
    vector<BankAccount> accounts;

    cout << "===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n\n";

    // ---------- 1. Enter information of depositors ----------
    int n;
    cout << "Enter number of depositors: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string name, address, type;
        double balance;

        cout << "\n--- Depositor " << (i + 1) << " ---\n";
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter account type (Savings/Current): ";
        getline(cin, type);
        cout << "Enter opening balance: ";
        cin >> balance;
        cin.ignore();

        accounts.emplace_back(name, address, type, balance);
        cout << "Account created successfully. Account Number: "
             << accounts.back().getAccountNumber() << "\n";
    }

    // ---------- 2-6. Menu-driven operations ----------
    // Lets the user repeat "print info / deposit / withdraw / change address"
    // for any account, as many times and in any order as they like.
    int choice = 0;
    while (true) {
        cout << "\n============ MENU ============\n";
        cout << "1. Display info of a depositor\n";
        cout << "2. Deposit amount\n";
        cout << "3. Withdraw amount\n";
        cout << "4. Change address\n";
        cout << "5. Show total number of transactions so far\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) {           // guard against non-numeric input
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number from the menu.\n";
            continue;
        }

        if (choice == 6) break;

        if (choice >= 1 && choice <= 4) {
            string accNo;
            cout << "Enter account number (e.g. BA1000): ";
            cin >> accNo;
            int idx = findAccountIndex(accounts, accNo);
            if (idx == -1) {
                cout << "Account not found.\n";
                continue;
            }

            if (choice == 1) {
                accounts[idx].displayInfo();
            } else if (choice == 2) {
                double amt;
                cout << "Enter amount to deposit: ";
                cin >> amt;
                accounts[idx].deposit(amt);
                accounts[idx].displayInfo();
            } else if (choice == 3) {
                double amt;
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                accounts[idx].withdraw(amt);
                accounts[idx].displayInfo();
            } else if (choice == 4) {
                cin.ignore();
                string newAddr;
                cout << "Enter new address: ";
                getline(cin, newAddr);
                accounts[idx].changeAddress(newAddr);
                accounts[idx].displayInfo();
            }
        } else if (choice == 5) {
            cout << "\nTotal number of transactions so far: "
                 << BankAccount::getTotalTransactions() << "\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    // ---------- Final summary ----------
    cout << "\n===== FINAL SUMMARY OF ALL ACCOUNTS =====\n";
    for (const auto &acc : accounts) {
        acc.displayInfo();
    }
    cout << "\nTotal number of transactions across all accounts: "
         << BankAccount::getTotalTransactions() << "\n";

    cout << "\nThank you for using the Bank Account Management System.\n";
    return 0;
}