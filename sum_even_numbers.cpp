#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter the ending number: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
