//Program to search element using Array
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,key;
    printf("Enter size of Array :\n");
    scanf("%d",&n);
    printf("Enter elements in Arrray :\n");

    //Using For Loop for insertion elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Element to be Searched :\n");
    scanf("%d",&key);

    //Using For Loop for Searching and Displaying the result
    for(i=0;i<n;i++)
    {

        //Using If statement 
        if(a[i]==key)
        {
            printf("Element found.");
            return 0;
        }
    }
    printf("Element not found.");                          //If nothing is found simply this will print
    
return 0;
}