#include <iostream>
using namespace std;

int main() {
    float marks, percentage;

    cout << "Enter marks (out of 100): ";
    cin >> marks;

    percentage = (marks / 100) * 100;

    cout << "Percentage = " << percentage << "%";

    return 0;
}

