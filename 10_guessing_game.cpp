#include <iostream>
using namespace std;

int main() {
    const int secretNumber = 7;
    int guess;

    cout << "Guess the number between 1 and 10: ";
    cin >> guess;

    while (guess != secretNumber) {
        if (guess < secretNumber) {
            cout << "Too low. Try again: ";
        } else {
            cout << "Too high. Try again: ";
        }
        cin >> guess;
    }

    cout << "Correct! You guessed the number." << endl;
    return 0;
}
