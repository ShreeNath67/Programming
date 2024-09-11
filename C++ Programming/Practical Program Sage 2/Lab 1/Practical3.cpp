//Program to find Standard Deviation.

#include <iostream>
#include <cmath> // For sqrt()
using namespace std;

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    float arr[n], sum = 0.0, mean, variance = 0.0, stddev;

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Calculate sum of elements
    }

    // Calculate mean
    mean = sum / n;

    // Calculate variance
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }

    // Calculate standard deviation
    stddev = sqrt(variance / n);

    // Display the result
    cout << "Standard Deviation: " << stddev << endl;

    return 0;
}
