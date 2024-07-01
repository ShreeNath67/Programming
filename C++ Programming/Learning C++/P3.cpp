// Defining member function outside the class
// Factorial program
#include<iostream>
#include<cmath>
using namespace std;

class factorial
{
    private:
    int n, fact;

    public:
    void input();
    void output();
};

void factorial::input()
{
    cout<<"Enter any number :";
    cin>>n;
}

void factorial::output()
{
    if(n < 0)
    {
        cout<<"Factorial of zero is not possible.";
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact *= i;
        }
        cout<<"The factorial is :"<<fact;
    }
}

int main()
{
    factorial z;
    z.input();
    z.output();
    return 0;
}