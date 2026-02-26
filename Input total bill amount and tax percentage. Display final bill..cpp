#include <iostream>
using namespace std;

int main() {
    float bill, tax, finalBill;

    cout << "Enter total bill amount: ";
    cin >> bill;

    cout << "Enter tax percentage: ";
    cin >> tax;

    finalBill = bill + (bill * tax / 100);

    cout << "Final Bill = " << finalBill;

    return 0;
}

