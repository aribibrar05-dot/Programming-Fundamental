#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14159;
    int r;
    double area;

    cout << "Enter the value of radius: ";
    cin >> r;

    area = pi * r * r;

    cout << "area = " << area;

    return 0;
}
