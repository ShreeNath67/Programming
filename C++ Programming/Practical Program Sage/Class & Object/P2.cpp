// Simple Calculator using OOPs concept

#include<iostream>
#include<cmath>
using namespace std;

class Calculator
{
   private:
   float a, b;
   int n;

   public: 
   void input()
   {
    // Entering two number for calculation
    cout<<" Enter any two number :";
    cin>>a>>b;

    // Entering number to choose from them
    cout<<"\n Choose which you wanna to perform :";
    cout<<"\n 1. Addition ";
    cout<<"\n 2. Subtraction ";
    cout<<"\n 3. Multiplication ";
    cout<<"\n 4. Division ";
    cout<<"\n 5. Remainder \n";
    cin>>n;
   }

    void output()
    {
        switch(n)
        {
            case 1:
            cout<<" \n The Addition of "<<a<<" and "<<b<<" is : "<<(a + b);
            break;

            case 2: 
            cout<<" \n The Subtraction of "<<a<<" and "<<b<<" is : "<<(a - b);
            break;

            case 3:
            cout<<" \n The Multiplication of "<<a<<" and "<<b<<" is : "<<(a * b);
            break;

            case 4:
            if(b != 0)
            cout<<" \n The Divsion of "<<a<<" and "<<b<<" is : "<<(a / b);
            else
            cout<<"Invalid: Division by zero ";
            break;

            case 5:
            if(b != 0 )
            cout<<" \n The Remainder  of "<<a<<" and "<<b<<" is : "<<(a % b);           // Error using % as modulus operator
            else
            cout<<"Invalid: Modulus by Zero";
            break;
             
            default:
            cout<<"\n Invalid Choice";
        }
    }

};


int main()
{
    Calculator z;
    z.input();
    z.output();
    return 0;
}