#include <iostream>
using namespace std;

int addNumbers(int first, int second) {
    return first + second;
}

int main() {
    int first, second;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    cout << "Sum: " << addNumbers(first, second) << endl;
    return 0;
}
