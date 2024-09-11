//Program to concatenate two string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;

    // Input the first string
    cout << "Enter the first string: ";
    getline(cin, str1);

    // Input the second string
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Concatenate the two strings
    result = str1 + str2;

    // Display the concatenated result
    cout << "Concatenated string: " << result << endl;

    return 0;
}
