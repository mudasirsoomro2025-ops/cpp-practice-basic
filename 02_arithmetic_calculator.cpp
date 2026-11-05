#include <iostream>
using namespace std;

int main() {
    double first, second;
    char operation;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> second;

    if (operation == '+') {
        cout << "Answer: " << first + second << endl;
    } else if (operation == '-') {
        cout << "Answer: " << first - second << endl;
    } else if (operation == '*') {
        cout << "Answer: " << first * second << endl;
    } else if (operation == '/') {
        if (second == 0) {
            cout << "Cannot divide by zero." << endl;
        } else {
            cout << "Answer: " << first / second << endl;
        }
    } else {
        cout << "Invalid operation." << endl;
    }

    return 0;
}
