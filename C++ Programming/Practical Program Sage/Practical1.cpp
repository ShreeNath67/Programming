// A program to print   numbers, alphabets, and special characters on output screen.

#include<iostream>
using namespace std;

int main()
{
   //Displaying Numbers
    cout<<" Numbers :";
    for(int i=0; i<10; i++)
    {
        cout<<i<<" ";
    }
   
       
    //Displaying Alphabets 
    cout<<"\n Upper Case :";
    for(char c='A'; c<='Z'; c++)
    {
        cout<<c<<" ";
    }

    cout<<"\n Lower Case :";
    for(char c='a'; c<='z'; c++)
    {
        cout<<c<<" ";
    }

    //Displaying Special characters
    cout<<"\n Special Characters :";
    for(char c=33; c<= 47; c++)
    {
        cout<<c<<" ";
    }
     return 0;
};