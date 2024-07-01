//A c++ program to find odd or even.
#include <iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter any number :";
    cin>>a;

    //Check if number is odd or even .
    if(a%2==0)
    {
        cout<<a<<"is even.";
    }
    else
    {
        cout<<a<<"is odd.";
    }

    return 0;
}