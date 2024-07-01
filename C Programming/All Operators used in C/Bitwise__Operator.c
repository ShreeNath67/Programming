// C program to illustrate the bitwise operators
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a & b: %d\n", a & b);                          //Bitwise And                  :- Performs bit-by-bit AND operation and returns the result.
    printf("a | b: %d\n", a | b);                          //Bitwise Or                   :- Performs bit-by-bit OR operation and returns the result.
    printf("a ^ b: %d\n", a ^ b);                          //Bitwise Xor                  :- Performs bit-by-bit XOR operation and returns the result.
    printf("~a: %d\n", ~a);                                //Bitwise First Compliment     :- Flips all the set and unset bits on the number.
    printf("a >> b: %d\n", a >> b);                        //Bitwise Rightshift           :- Shifts the number in binary form by one place in the operation and returns the result.
    printf("a << b: %d\n", a << b);                        //Bitwise Leftshift            :- Shifts the number in binary form by one place in the operation and returns the result.

    return 0;
}
