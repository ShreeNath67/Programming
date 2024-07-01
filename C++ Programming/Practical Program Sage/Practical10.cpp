//Program whuch accept value of base and power from user and displays its value(base^power ) using UDF
#include <iostream>
#include <cmath> // Required for pow() function

using namespace std;

// Function to calculate power of a number
double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double base;
    int powerValue;

    // Input base and power from the user
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> powerValue;

    // Calculate and display the result
    cout << "Result: " << power(base, powerValue) << endl;

    return 0;
}
