//Program of Parametrized Constructor

#include<iostream>
using namespace std;

class sum
{ 
    private:
    int a, b, add;
    public:
    sum(int a, int b)
    {
       add = a + b;
    }

    void display()
    {
        cout<<"The sum is :"<<add<<endl;
    }
};

int main()
{
    sum z(15,30);                    //Passed a perimeter
    z.display();
    return 0;
}