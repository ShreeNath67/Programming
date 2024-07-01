//Program to find Area of Circle and Rectangle using Parameterized function (Call By value)
#include<stdio.h>

int Circle(int r);                                                //Function Declaration 
int Rectangle(int l,int b);                                       //Function Prototype

int Circle(int r)
{
    int result1=3.14*r*r;
    printf("The result is : %d \n",result1);
}

int Rectangle(int l,int b)
{
    int result2=l*b;
    printf("The result is : %d \n",result2);
}

int main()                                                     //Function Call by value
{
    Circle(10);
    Rectangle(4,7);
    return 0;
}