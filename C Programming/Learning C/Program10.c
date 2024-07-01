//Program to find odd or even using Only IF statement
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to check odd or even :\n");
    scanf("%d",&num);

    //Using Only IF statement
    if(num%2==0)                                                //Condition to find even number
    {
        printf("%d is even number \n",num);          
    }

    if(num%2==1)                                                //Condition to find odd number
    {
        printf("%d is odd number \n",num);
    }
     
    return 0;
}