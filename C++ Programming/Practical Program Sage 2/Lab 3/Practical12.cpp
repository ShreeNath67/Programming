//Program to add complex numbers by using Structure to a function.

#include <iostream>
using namespace std;

// Define a structure to hold a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1, c2, sum;

    // Input the first complex number
    cout << "Enter the first complex number (real and imaginary part): ";
    cin >> c1.real >> c1.imag;

    // Input the second complex number
    cout << "Enter the second complex number (real and imaginary part): ";
    cin >> c2.real >> c2.imag;

    // Call the function to add the complex numbers
    sum = addComplex(c1, c2);

    // Display the result
    cout << "Sum of complex numbers: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
