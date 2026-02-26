#include <iostream>
using namespace std;

int main() {

    int n1, n2, n3, n4, n5;

    cout << "Enter five numbers: "<<endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // For Maximum
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        cout << "n1 is max" << endl;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        cout << "n2 is max" << endl;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        cout << "n3 is max" << endl;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
        cout << "n4 is max" << endl;
    }
    else {
        cout << "n5 is max" << endl;
    }

    // For Minimum
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        cout << "n1 is mini" << endl;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        cout << "n2 is mini" << endl;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        cout << "n3 is mini" << endl;
    }
    else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        cout << "n4 is mini" << endl;
    }
    else {
        cout << "n5 is mini" << endl;
    }

    return 0;
}
