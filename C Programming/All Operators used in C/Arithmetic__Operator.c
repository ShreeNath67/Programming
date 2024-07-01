// C program to illustrate the arithmatic operators
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a + b = %d\n", a + b);                                    //Addition              :- Adds two numeric values.
    printf("a - b = %d\n", a - b);                                    //Subtraction           :- Subtracts right operand from left operand.
    printf("a * b = %d\n", a * b);                                    //Multiplication        :- Multiply two numeric values.
    printf("a / b = %d\n", a / b);                                    //Division              :- Divide two numeric values.
    printf("a % b = %d\n", a % b);                                    //Modulus               :- Returns the remainder after diving the left operand with the right operand.
    printf("+a = %d\n", +a);                                          //Unary Plus            :- Used to specify the positive values.
    printf("-a = %d\n", -a);                                          //Unary Minus           :- Flips the sign of the value.
    printf("a++ = %d\n", a++);                                        //Increment             :- Increases the value of the operand by 1.
    printf("a-- = %d\n", a--);                                        //Decrement             :- Decreases the value of the operand by 1.

    return 0;
}
