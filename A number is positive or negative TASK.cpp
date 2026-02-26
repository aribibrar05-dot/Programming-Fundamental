#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    (num >= 0) ? cout << "Positive number" : cout << "Negative number";

    return 0;
}

