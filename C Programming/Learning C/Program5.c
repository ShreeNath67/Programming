// Simple Calculator
#include<stdio.h>
#include<math.h>
 int main()
 {
    float a,b;
    printf("Enter any two numbers:\n");
    scanf("%f%f",&a,&b);

    //Sum of two numbers
    float sum= a+b;
    printf("The sum of two number is :%f\n",sum);

    //Sub of two numbers
    float sub= a-b;
    printf("The sub of two number is :%f\n",sub);

    //Multiplication of two numbers
    float mul= a*b;
    printf("Multiplication of two number is :%f\n",mul);

    //Division of two numbers
    float div= a/b;
    printf("Division of two number is :%f\n",div);

    return 0;
 }