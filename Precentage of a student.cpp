#include<iostream>
using namespace std;

int main()
{
    int obtainedmarks, percentage;

    cout << "Enter marks= ";
    cin >> obtainedmarks;

    percentage = obtainedmarks * 100 / 200;

    cout << "Percentage = " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "You Obtained A+";
    else if(percentage >= 80)
        cout << "You Obtained A";
    else if(percentage >= 70)
        cout << "You Obtained B";
    else if(percentage >= 60)
        cout << "You Obtained C";
    else
        cout << "You Obtained F";

    return 0;
}

