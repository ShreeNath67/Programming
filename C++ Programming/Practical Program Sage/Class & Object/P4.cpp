// Program of fabonacci series
#include<iostream>
#include<cmath>
using namespace std;

class fabonacci
{
    private:
    int a=0, b=1, n, next, i=2;

    public:
    void fab()
    {
        cout<<"Enter the number of terms :";
        cin>>n;

       while (i < n)
       {
         next = a + b;
         cout <<next<<" ";
         a = b;
         b = next;
         i++;
       }
    }
} z;

int main()
{
    z.fab();
    return 0;
}