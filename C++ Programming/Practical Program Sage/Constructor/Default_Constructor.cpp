//Program of Default constructor
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    double rollno, fee;
    string name;

public:
    Student()
    {
        cout << " Enter Name: ";
        getline(cin, name);
        cout << "\n Enter Roll NO: ";
        cin >> rollno;
        cout << "\n Enter Fee: ";
        cin >> fee;
    }

    void display()
    {
        cout << endl << rollno << "\n" << name << "\n" << fee;
    }
};

int main()
{
    Student z; 
    z.display();
    return 0;
}
