//Program to add first 10 numbers using For statement
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);

    //Using For statement
    int sum=0;

    for(int i=1;i<=n;i++)                             //Logic for increasing order
    {
        sum=sum+i;
    }

    printf("Sum of number is:%d",sum);
    return 0;
}