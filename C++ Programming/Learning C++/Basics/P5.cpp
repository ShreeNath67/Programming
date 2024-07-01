//A c++ program to print multiplication table of given number.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num,i;
  cout<<"Enter the number :";
  cin>>num;

  //Using For Loop
  for(i=1; i<=10;i++)
  {
    int total = num*i;
    cout<<"\n "<<num<<" x "<<i<<" = "<<total;
  }

  return 0;
}