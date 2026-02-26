#include <iostream>
using namespace std;

int main()
{
    string instructorName, yourName, food, adjective, color, animal;
    int number;

    cout << "Enter your instructor's first or last name: ";
    cin >> instructorName;

    cout << "Enter your name: ";
    cin >> yourName;

    cout << "Enter a food: ";
    cin >> food;

    cout << "Enter a number between 100 and 120: ";
    cin >> number;

    cout << "Enter an adjective: ";
    cin >> adjective;

    cout << "Enter a color: ";
    cin >> color;

    cout << "Enter an animal: ";
    cin >> animal;

    cout << "\n\nDear Instructor " << instructorName << ",\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. ";
    cout << "First, I ate a rotten " << food << ", which made me turn " << color;
    cout << " and extremely ill. I came down with a fever of " << number << ". ";
    cout << "Next, my " << adjective << " pet " << animal;
    cout << " must have smelled the remains of the " << food;
    cout << " on my homework, because he ate it. ";
    cout << "I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely"<<endl;
    cout << yourName;

    return 0;
}
