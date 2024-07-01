//Program that accept age in years from user as input and displaying his age in months and days.

#include<iostream>
using namespace std;

int main()
{
    int age;

    //Taking input
   cout<<"Enter your Age:";
   cin>>age;
   
   //Processing
   int month= age*12;
   int day= age*365; 

   
   //Displaying the result
   cout<<" Your Age is :"<<age;
   cout<<"\n Your age in months :"<<month;
   cout<<"\n Your age in days"<<day;
   return 0;

};