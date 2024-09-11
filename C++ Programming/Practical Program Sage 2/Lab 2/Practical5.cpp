//Program to Find Frequency of Characters in String.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};  // ASCII characters array to store frequency (size 256)

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Count the frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;  // Increment frequency of the character
    }

    // Display the frequency of each character
    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }

    return 0;
}
