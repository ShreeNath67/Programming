//Program to demonstrate the basic class program to get department, name and salary of an employee.

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    string name, department;
    double salary;

    public:
    Employee(string empName, string empDepartment, double empSalary)
    {
        department = empDepartment;
        name = empName;
        salary = empSalary;
    }

    string getName(){
        return name;
    }
    
    string getDepartment(){
        return department;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp("Jhon Doe","IT",50000);
    cout<<"Department :"<<emp.getDepartment()<<endl;
    cout<<"Name :"<<emp.getName()<<endl;
    cout<<"Salary :$"<<emp.getSalary()<<endl;

    return 0;
}