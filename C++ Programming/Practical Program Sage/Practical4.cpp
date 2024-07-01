//Program that calculate area of Circle, Square, and Rectangle using Switch-Case statement.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    float rad, l, a, b;
    float circle, square, rec;

    cout << "Choose Which you wanna find:";
    cout << "\n 1. Area of Circle";
    cout << "\n 2. Area of Square";
    cout << "\n 3. Area of Rectangle";
    cin >> n;

    switch(n)
    {
        case 1:
            cout << "Enter the radius: ";
            cin >> rad;
            circle = rad * rad * 3.14;
            cout << "Area of Circle is: " << circle;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> l;
            square = l * l;
            cout << "Area of Square is: " << square;
            break;

        case 3:
            cout << "Enter length and breadth: ";
            cin >> a >> b;
            rec = a * b;
            cout << "Area of Rectangle is: " << rec;
            break;

        default:
            cout << "Invalid option!";
            break;
    }

    return 0;
}
