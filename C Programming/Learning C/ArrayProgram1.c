//program to insert and display using Array
#include<stdio.h>
int main()
{
   int insert[20];
   printf("Enter elements for Array :\n");

   //Using For Loop for Insertion
   for(int i=0;i<4;i++)
   {
    scanf("%d",&insert[i]);
   }

   //Using For Loop for Displaying Result
   for(int i=0;i<4;i++)
   {
    printf("Array is :%d \n",insert[i]);
   }
   
   return 0;

}