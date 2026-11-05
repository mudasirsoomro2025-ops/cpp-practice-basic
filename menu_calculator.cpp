#include <iostream>
using namespace std;

int main() {
    int choice;
    double first, second;

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    switch (choice) {
        case 1:
            cout << "Answer: " << first + second << endl;
            break;
        case 2:
            cout << "Answer: " << first - second << endl;
            break;
        case 3:
            cout << "Answer: " << first * second << endl;
            break;
        case 4:
            if (second == 0) {
                cout << "Cannot divide by zero." << endl;
            } else {
                cout << "Answer: " << first / second << endl;
            }
            break;
        default:
            cout << "Invalid option." << endl;
    }

    return 0;
}
