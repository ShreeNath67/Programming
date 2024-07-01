//Program to find prime number using For statement
#include<stdio.h>
int main()
{
  int a, n=0;
  printf("Enter any number :\n");
  scanf("%d",&a);
   
   //Using For loop
   for(int i=2; i<a-1;i++)
   {
    //Using IF statement
    if(a%i==0)
    {
        n=1;
        break;
    }
   }

   //Using IF statement
   if(a==0)
   {
    printf("1 is neither prime or composite number\n");
   }
    else if (n==0)
    {
        printf("Prime NUmber\n");
    }
    else
    {
        printf("Composite number\n");
    }
    return 0;

}