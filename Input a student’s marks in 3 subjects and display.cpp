#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, total, average;

    cin >> m1;
    cin >> m2;
    cin >> m3;

    total = m1 + m2 + m3;
    average = total / 3;

    cout << total << endl;
    cout << average;

    return 0;
}

