//Marksheet of 12th class marks and average
#include<stdio.h>
 int main()
 {
    float a,b,c,d,e;     //Marks of five subjects
    printf("enter marksheet:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    //Sum of marks
    float mark= a+b+c+d+e;
    printf("Total marks of five subjects=%f\n",mark);

    //Average of marks
    float avg= mark/5;
    printf("Average of five subjects=%f\n",avg);

    return 0;
 }
 