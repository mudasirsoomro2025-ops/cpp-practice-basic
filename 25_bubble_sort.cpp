#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - pass - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                int temporary = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temporary;
            }
        }
    }
}

int main() {
    const int size = 6;
    int numbers[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) cin >> numbers[i];

    bubbleSort(numbers, size);

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
