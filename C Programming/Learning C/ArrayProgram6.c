//Program to find address of variable inside system using Pointer
#include<stdio.h>
int main()
{
    int var;
    printf("Enter the variable :");                                            //Input                           
    scanf("%d",&var);                                                              
    printf("The varriabe  %d address is: %p \n",var,&var);                    //Output
    return 0;
}


//Note:
// Pointer is an object in many programming languages that stores a memory address.
// %p is used to display the address of pointer depending by our system.