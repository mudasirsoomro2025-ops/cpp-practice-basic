#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& text) {
    int left = 0;
    int right = static_cast<int>(text.length()) - 1;

    while (left < right) {
        if (text[left] != text[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string text;
    cout << "Enter a word: ";
    cin >> text;

    if (isPalindrome(text)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }
    return 0;
}
