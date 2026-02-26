#include <iostream>
using namespace std;

int main() {
    float hours, rate, totalPay;

    cin >> hours;
    cin >> rate;

    totalPay = hours * rate;

    cout << totalPay;

    return 0;
}

