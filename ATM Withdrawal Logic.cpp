#include <iostream>
using namespace std;

int main() {
    float balance, withdraw;

    cin >> balance;
    cin >> withdraw;

    if (withdraw <= balance)
        cout << "Transaction Successful";
    else
        cout << "Insufficient Balance";

    return 0;
}

