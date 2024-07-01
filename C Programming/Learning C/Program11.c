//Program to calculate electricity bill
//Condition given:
//Use of electricity less than 100 units costs is rs100.
//Use of electricity more than 100 units and less than 200 units costs is rs10 per unit
//Use of electricity more than 200 units costs is rs20 per unit

#include<stdio.h>
int main()
{
    int unit , A=100, C=200;
    printf("Enter the units:\n");
    scanf("%d",&unit);

    //Using Nested IF statement
    if(unit<=100)
    {
        printf("Amount is =%d",A);                      //Logic for finding cost for unit less than 100 units
    }
    else if (unit>100&&unit<=200)
    {

        int B= A+(unit-A)*10;                           //Logic for finding cost for unit greater than 100 and less than 200 units
        printf("Amount is =%d",B);
    }
    else
    {
        int D= C+(unit-C)*20;                           //Logic for finding cost for unit greater than 200 units
        printf("Amount is =%d",D);
    }

    return 0;
}