#include <iostream>
using namespace std;

int findLargest(int first, int second, int third) {
    int largest = first;

    if (second > largest) {
        largest = second;
    }
    if (third > largest) {
        largest = third;
    }

    return largest;
}

int main() {
    int first, second, third;

    cout << "Enter three numbers: ";
    cin >> first >> second >> third;

    cout << "Largest number: " << findLargest(first, second, third) << endl;
    return 0;
}
