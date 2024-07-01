// C program to illustrate the arithmatic operators
#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a = b: %d\n", a = b);                        //Simple Assignment            :- Assign the value of the right operand to the left operand.
    printf("a += b: %d\n", a += b);                      //Plus and assign              :- Add the right operand and left operand and assign this value to the left operand.
    printf("a -= b: %d\n", a -= b);                      //Minus and assign             :- Subtract the right operand and left operand and assign this value to the left operand.
    printf("a *= b: %d\n", a *= b);                      //Multiply and assign          :- Multiply the right operand and left operand and assign this value to the left operand.
    printf("a /= b: %d\n", a /= b);                      //Divide and assign            :- Divide the left operand with the right operand and assign this value to the left operand.	
    printf("a %= b: %d\n", a %= b);                      //Modulus and assign           :- Assign the remainder in the division of left operand with the right operand to the left operand.
    printf("a &= b: %d\n", a &= b);                      //AND and assign               :- Performs bitwise AND and assigns this value to the left operand.
    printf("a |= b: %d\n", a |= b);                      //OR and assign                :- Performs bitwise OR and assigns this value to the left operand.
    printf("a ^= b: %d\n", a ^= b);                      //XOR and assign               :- Performs bitwise XOR and assigns this value to the left operand.
    printf("a >>= b: %d\n", a >> b);                     //Rightshift and assign        :- Performs bitwise Rightshift and assign this value to the left operand.
    printf("a <<= b: %d\n", a << b);                     //Leftshift and assign         :- Performs bitwise Leftshift and assign this value to the left operand.	

    return 0;
}
