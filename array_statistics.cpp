#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size];
    int sum = 0;
    int largest;
    int smallest;

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) largest = numbers[i];
        if (numbers[i] < smallest) smallest = numbers[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << static_cast<double>(sum) / size << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    return 0;
}
