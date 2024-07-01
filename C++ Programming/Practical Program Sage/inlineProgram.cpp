//C++ program to demonstrate inline functions and classes

#include<iostream>
using namespace std;

class operation
{
    private:
    int a, b;
    

    public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation::get()
{
    cout<<" Enter first value :";
    cin>>a;
    cout<<"\n Enter second value :";
    cin>>b;
}

inline void operation::sum()
{
  cout<<"\n Addition of two numbers :"<<a+b<<endl;
}

inline void operation::difference()
{
  cout<<"\n Difference of two numbers :"<<a-b<<endl;
}

inline void operation::product()
{
  cout<<"\n Product of two numbers :"<<a*b<<endl;
}

inline void operation::division()
{
  cout<<"\n Division of two numbers :"<<a/b<<endl;
}

int main()
{
    cout<<"Program using inline function \n";
    operation z;
    z.get();
    z.sum();
    z.difference();
    z.product();
    z.division();
    return 0;
}