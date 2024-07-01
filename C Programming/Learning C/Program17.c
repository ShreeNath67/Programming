//Program to print Odd number form 1-100  using For statement
//Use of Continue statement
#include<stdio.h>
int main()
{
//Using For Loop
for(int i=1;i<=100;i++)
{
    //Using IF statement
    if(i%2==0)
    {
        continue;                                              
    }
    printf("%d \n",i);
}
return 0;
}


//Note if we use Continue statement then it will escape one round.