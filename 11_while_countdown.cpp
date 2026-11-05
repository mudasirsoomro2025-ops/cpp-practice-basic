#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 1) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    while (number >= 1) {
        cout << number << " ";
        number--;
    }
    cout << endl;

    return 0;
}
