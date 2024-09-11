//Program to find length of string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Find and display the length of the string
    cout << "Length of the string: " << str.length() << endl;

    return 0;
}
