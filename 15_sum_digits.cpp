#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
