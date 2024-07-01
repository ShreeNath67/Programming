//Finding largest number using Only IF statement
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    //Use of Only IF statement
    if(a>b&&a>c)
     {
        printf("%d is largest number\n",a);          //First number is largest
     }

    if(b>a&&b>c)
    {
        printf("%d is largest number\n",b);         //Second number is largest
    }

    if(c>a&&c>b)
    {
        printf("%d is largest number\n",c);        //Third number is largest
    }
    
    if(a==b||b==c||c==a)
    {
        printf("Two numbers are equal");         //If two numbers are same this will simply print
    }

    return 0;
}