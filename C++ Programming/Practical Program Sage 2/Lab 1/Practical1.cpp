//Proram to calculate average using array.

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], sum = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average: " << (float)sum / n << endl;

    return 0;
}
