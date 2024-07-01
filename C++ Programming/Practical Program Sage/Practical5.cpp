//Program to accept number from user and displays all factors of that number.
#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> number;

    // Displaying factors of the entered number
    cout << "Factors of " << number << " are: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
