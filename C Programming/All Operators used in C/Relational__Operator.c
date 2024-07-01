// C program to illustrate the relational operators
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a < b  : %d\n", a < b);                                    //Smaller than                    :. Returns true if the left operand is less than the right operand. Else false 
    printf("a > b  : %d\n", a > b);                                    //Greater than                    :. Returns true if the left operand is greater than the right operand. Else false 
    printf("a <= b: %d\n", a <= b);                                    //Less than or equal to           :. Returns true if the left operand is less than or equal to the right operand. Else false 
    printf("a >= b: %d\n", a >= b);                                    //Greater than or equal to        :. Returns true if the left operand is greater than or equal to right operand. Else false
    printf("a == b: %d\n", a == b);                                    //Equal to                        :. Returns true if both the operands are equal.
    printf("a != b : %d\n", a != b);                                   //Not equal to                    :. Returns true if both the operands are NOT equal.

    return 0;
}
