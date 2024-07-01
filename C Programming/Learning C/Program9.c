//Print grade of students using Only IF statement
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark :\n");
    scanf("%d",&mark);
    
    //Use of Only IF statement
    if(mark>0&&mark<=30)
    {
        printf("D grade");            //D grade for less than 30 marks
    }

    if(mark>=30&&mark<70)
    {
        printf("C grade");           //C grade for less than 70 marks and greater than 30 marks
    }

    if(mark>=70&&mark<80)
    {
        printf("B grade");           //B grade for less than 80 marks and greater than 70 marks
    }

    if(mark>=80&&mark<90)
    {
        printf("A grade");           //A grade for less than 90 marks and greater than 80 marks
    }

   if(mark>=90&&mark>=100)
   {
       printf("A+ grade");          //A+ grade for more than 90 marks
   } 

   return 0;
}