#include <iostream>
using namespace std;

class Dollar;  // Forward declaration

class INR
{
private:
    float amount;

public:
    void set_amount(float a)
    {
        amount = a;
    }

    friend void total_evaluation(INR i, Dollar d);
};

class Dollar
{
    float amount;

public:
    void set_amount(float a)
    {
        amount = a;
    }

    friend void total_evaluation(INR i, Dollar d);
};

void total_evaluation(INR i, Dollar d)
{
    float totalINR, totalUSD;

    // Convert Dollar to INR
    totalINR = i.amount + (d.amount * 90);

    // Convert INR to Dollar
    totalUSD = d.amount + (i.amount / 90);

    cout << "Total Amount in INR: " << totalINR << endl;
    cout << "Total Amount in USD: " << totalUSD << endl;
}

int main()
{
    INR i;
    Dollar d;

    float inr, dollar;

    cout << "Enter amount in INR: ";
    cin >> inr;//10000

    cout << "Enter amount in USD: ";
    cin >> dollar;//100

    i.set_amount(inr);
    d.set_amount(dollar);

    total_evaluation(i, d);

    return 0;
}
