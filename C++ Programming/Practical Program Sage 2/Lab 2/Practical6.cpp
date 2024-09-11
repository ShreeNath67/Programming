//Program to find number of Vowels, Consonants, Digits and White Space in String.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Loop through the string to check each character
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // Convert character to lowercase for easier comparison

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for white spaces
        else if (ch == ' ') {
            spaces++;
        }
    }

    // Output the result
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White Spaces: " << spaces << endl;

    return 0;
}
