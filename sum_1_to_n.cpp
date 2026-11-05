#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;
    return 0;
}
