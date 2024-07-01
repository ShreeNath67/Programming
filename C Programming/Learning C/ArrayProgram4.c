//Program to perform Area of Circle and Rectangle using Default function
#include<stdio.h>

int Circle();                                //Function Declaration
int Rectangle();                             //Function Prototype

int Circle()
{
    int r,result1;
    printf("Enter the radius :\n");
    scanf("%d",&r);
    result1= 3.14*r*r;
    printf("The result is : %d \n",result1);
}

int Rectangle()
{
    int a,b,result2;
    printf("Enter length and breadth :\n");
    scanf("%d%d",&a,&b);
    result2=a*b;
    printf("The result is : %d \n",result2);
}

int main()                                                       //Function Calling
{
     Circle();
     Rectangle();
     return 0;
}