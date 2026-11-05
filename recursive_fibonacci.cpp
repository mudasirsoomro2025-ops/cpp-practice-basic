#include <iostream>
using namespace std;

long long fibonacci(int position) {
    if (position <= 1) return position;
    return fibonacci(position - 1) + fibonacci(position - 2);
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    if (terms < 1 || terms > 40) {
        cout << "Enter a number between 1 and 40." << endl;
        return 0;
    }

    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
