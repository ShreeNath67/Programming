//Write a program which should work like a strlen function using UDF
#include <iostream>
using namespace std;

// Function to calculate the length of a string
int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];

    // Input string from the user
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Calculate the length of the string using the UDF
    int length = stringLength(str);

    // Output the length of the string
    cout << "Length of the string: " << length << endl;

    return 0;
}
