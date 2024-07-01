//Character is upper case or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);
    
    //Using Condition of  Nested IF statement
    if(ch>='A'&&ch<='Z')
    {
        printf("Character is upper case\n");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("Character is lower case\n");
    }
    else
    {
        printf("Not a Character");
    }
    
    return 0;
}