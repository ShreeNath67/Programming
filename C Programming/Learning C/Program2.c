// Area of Circle
#include<stdio.h>
int main()
{
    float r;
    printf("Enter the radius:\n");
    scanf("%f",&r);

    float area= 3.14 * r* r;                                //Formula for Area of Circle

    printf("The area of circle is:%f",area);
    return 0;
}