//Program that demonstrates the use of arithematic and assignment operators by getting two numbers from user.

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter any two numbers :";
    cin>>a>>b;

    //Using Arithematic Operators
    cout<<"\n a + b ="<< a + b;             //Addition
    cout<<"\n a - b ="<< a - b;             //Subtraction       
    cout<<"\n a * b ="<< a * b;             //Multiplication
    cout<<"\n a / b ="<< a / b;             //Division
    cout<<"\n a % b ="<< a % b;             //Modulus
    cout<<"\n +a ="<< +a;                   //Positive value             
    cout<<"\n -a ="<< -a;                   //Negative value
    cout<<"\n a++ ="<< a++;                 //Increment 
    cout<<"\n a-- ="<< a--;                 //Decrement

    //Using Assign Operators
    a += b;                                //Addition assignment
    cout<<"\n X: "<<a;

    a -= b;                                //Subtraction assignment
    cout<<"\n X: "<<a;

    a *= b;                                //Multiplication assignment
    cout<<"\n X: "<<a;

    a /= b;                                //Division assignment
    cout<<"\n X: "<<a;

    a %= b;                                //Modulus assignment
    cout<<"\n X: "<<a;
    
    return 0;
}