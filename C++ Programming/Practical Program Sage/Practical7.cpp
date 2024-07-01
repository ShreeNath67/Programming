//Program that accept 9 numbers in the form of matrix and display transpose of that matrix.

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];

    // Accepting input for the matrix
    cout << " Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) 
     {
        for (int j = 0; j < 3; j++)
         {
            cout << "\n Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
         }
     }

    // Displaying the original matrix
    cout << "\n Original matrix:" << endl;
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            cout << matrix[i][j] << " ";
         }
     }

    // Displaying the transpose of the matrix
    cout << "\n Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            cout << matrix[j][i] << " ";
         }
     }

    return 0;
};
