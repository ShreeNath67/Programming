// A c++ program for addition, subtraction, multiplication and division.
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter Any two number:";   
    cin >> a>>b;

    //Addition
    int c=a+b;
    cout<<"THe sum is "<<c;

    //Subtraction
    int d= a-b;
    cout<<"\n THe sub is "<<d;

    //Multiplication
    int e=a*b;
    cout<<"\nTHe mul is "<<e;

    //Division
    int f= a/b;
    cout<<"\n THe div is"<<f;

    return 0;


}