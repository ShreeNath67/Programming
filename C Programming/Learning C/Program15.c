//Program to preform addition of two matrix using Array
#include<stdio.h>
#include<math.h>
int main()
{
    int m, n, i, j;
    printf("Enter the number in rows and columns :\n");
    scanf("%d%d",&m,&n);

    int a[m][n],b[m][n],c[m][n];                                           //Formula to add elements in matrices
    printf("Enter elements  of matrix A:\n");

    //For input in matrix A using For statement
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");

    //For input in matrix B using For statement
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //Add the matrices using For statement
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    //Print the result using For statement
    printf("The sum of two matrices is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }

        printf("\n");
    }

    return 0;
}