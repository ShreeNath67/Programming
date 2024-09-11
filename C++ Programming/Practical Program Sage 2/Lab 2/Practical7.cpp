//program to remove all characters in a string except alphabets.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Loop through the string
    for (int i = 0; i < str.length(); i++) {
        // Check if the character is an alphabet (uppercase or lowercase)
        if (isalpha(str[i])) {
            result += str[i];  // Append only alphabets to the result string
        }
    }

    // Output the result
    cout << "String with only alphabets: " << result << endl;

    return 0;
}
