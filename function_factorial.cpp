#include <iostream>
using namespace std;

long long calculateFactorial(int number) {
    long long factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;

    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        cout << "Factorial: " << calculateFactorial(number) << endl;
    }

    return 0;
}
