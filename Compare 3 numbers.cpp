#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int max, min;

    cout << "Enter Number 1= ";
    cin >> num1;

    cout << "Enter Number 2= ";
    cin >> num2;

    cout << "Enter Number 3= ";
    cin >> num3;

    // Greatest
    if(num1 > num2 && num1 > num3)
        max = num1;
    else if(num2 > num1 && num2 > num3)
        max = num2;
    else
        max = num3;

    // Smallest
    if(num1 < num2 && num1 < num3)
        min = num1;
    else if(num2 < num1 && num2 < num3)
        min = num2;
    else
        min = num3;

    cout << "Greatest Number = " << max << endl;
    cout << "Smallest Number = " << min << endl;

    return 0;
}

