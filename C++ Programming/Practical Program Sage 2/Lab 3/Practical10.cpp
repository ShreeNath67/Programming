//Program to store information (names, rollno & marks) of a Student using a Structure.

#include <iostream>
using namespace std;

// Define a structure to hold Student information
struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    Student s1;

    // Input Student information
    cout << "Enter Student's name: ";
    getline(cin, s1.name);

    cout << "Enter Student's roll number: ";
    cin >> s1.rollNo;

    cout << "Enter Student's marks: ";
    cin >> s1.marks;

    // Display the Student information
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
