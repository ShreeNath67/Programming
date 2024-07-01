//Program to find Natural number or not using Nested IF statement
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number :\n");
    scanf("%d",&n);

   //Using Nested IF statement
   if(n>0)
   {
      if(n%2==0)
      {
        printf("Natural even number :\n");
      }
     else
      {
        printf("Natural odd number :\n");
       }
   }

    else
    {
      printf("Not natural number");
    }
   
   return 0;
}