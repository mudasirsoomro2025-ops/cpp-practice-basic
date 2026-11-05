#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    const string fileName = "practice_note.txt";

    cout << "Enter a message: ";
    getline(cin, message);

    ofstream outputFile(fileName);
    if (!outputFile) {
        cout << "Unable to open the file for writing." << endl;
        return 1;
    }
    outputFile << message << endl;
    outputFile.close();

    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Unable to open the file for reading." << endl;
        return 1;
    }

    string savedMessage;
    getline(inputFile, savedMessage);
    cout << "Saved message: " << savedMessage << endl;
    inputFile.close();
    return 0;
}
