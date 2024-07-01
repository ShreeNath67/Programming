// C program to illustrate the logical operators
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a && b : %d\n", a && b);                         //Logical And             :- Returns true if both the operands are true.
    printf("a || b : %d\n", a || b);                         //Logical Or              :- Returns true if both or any of the operand is true.
    printf("!a: %d\n", !a);                                  //Logical Not             :- Returns true if the operand is false.

    return 0;
}
