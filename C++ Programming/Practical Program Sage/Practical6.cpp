//Program to accept a number from keyboard and find its factorial.
#include <iostream>
using namespace std;

int main() {
    int num;
    int fac = 1;

    // Ask the user to enter a number
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } 
    // Calculate factorial for non-negative numbers
    else {
        for (int i = 1; i <= num; i++) {
            fac *= i;
        }
        cout << "Factorial of " << num << " is: " << fac<< endl;
    }

    return 0;
}

