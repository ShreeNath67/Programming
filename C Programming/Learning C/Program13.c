//Program to display prime number using While loop
#include<stdio.h>
int main()
{
    int start, end, count;
    printf("Enter the value of start:\n");
    scanf("%d",&start);

    printf("Enter the value of end:\n");
    scanf("%d",&end);

   //Using While loop
   int i=start;
   while(i<=end)
   {
    count=0;

    //Using For statement
    for( int j=1;j<=i;j++)
    {
    
      //Using If statement
      if(i%j==0)
      {
        count= count+1;
       }
    } 

    //Using IF statement
    if(count==2)
    {
        printf("Prime number : %d\n",i);
    }
    i++;
   }

   return 0;

}