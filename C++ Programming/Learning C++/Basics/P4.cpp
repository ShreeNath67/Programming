//A c++ program to find area as well as perimeter of rectangle , square and triangle.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c;
    cout<<" Enter the length of a:";
    cin>>a;
    cout<<"\n Enter the length of b:";
    cin>>b;
    cout<<"\n Enter the length of c:";
    cin>>c;

    //Rectangle
    float area1 = a*b;
    float perimeter1 = 2*(a+b);

    cout<<" The area of rectangle is :"<< area1;
    cout<<"\n The perimeter of rectangle is :"<< perimeter1;

    //Square
    float area2 = a*a;
    float perimeter2 = 4*a;

    cout<<"\n The area of squareis :"<< area2;
    cout<<"\n The perimeter of square is :"<< perimeter2;

    //Triangle
    float s= (float)(a+b+c)/2;
    float area3 = sqrt(s*(s-a)*(s-b)*(s-c));
   
    float perimeter3 = a+b+c;

    cout<<"\n The area of triangle is :"<< area3;
    cout<<"\n The perimeter of triangle is :"<< perimeter3;

    return 0;

}