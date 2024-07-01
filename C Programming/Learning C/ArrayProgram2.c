//Program to insert and displaying using Array in reverse order
#include<stdio.h>
int main()
{
    int insert[20] ,n;
    printf("Enter number of element to be inserted :\n");
    scanf("%d",&n);
    printf("Enter element in Array :\n");

    //Using For Loop for insertion
    for(int i=0;i<n;i++)
    {
        scanf("%d",&insert[i]);
    }

    //Using For Loop for Displaying Result in Reverse Order
    for(int i=n;i>=0;i--)
    {
       printf("Result in reverse order :%d \n",insert[i]);
    }
    return 0;
}