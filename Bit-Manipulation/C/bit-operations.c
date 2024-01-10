// Author: Ankita Mistry
// C Program to demonstrate use of bitwise operators
// Ask user to enter 2 decimal numbers
// Ask user to enter number for Lght shift opearion.


#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a;
    uint8_t b;

    // Ask user to input 2 numbers for variable a and b.
    printf("Please enter number for variable a: ");
    scanf("%d", &a);
    printf("Value of a is: %d\n", a);

    printf("Please enter number for variable b: ");
    scanf("%d", &b);
    printf("Value of b is: %d\n", b);

    //Print value of a and b in hex
    // hex print ("0x%X") 
    printf("a = 0x%x  ,b = 0x%x\n",  a, b);

    //Print value of a and b in decimal
    // dec print ("%d")
    printf("a = %d  ,b = %d\n",  a, b);

    // Perform AND operation on a and b and print results
    printf("a & b in Decimal  = %d\n", a & b);
    printf("a & b in Hex = 0x%x\n", a & b);

    // Perform OR operation on a and b and print results
    printf("a | b in Decimal  = %d\n", a | b);
    printf("a | b in Hex = 0x%x\n", a | b);

    // Perform XOR operation on a and b and print results
    printf("a ^ b in Decimal  = %d\n", a ^ b);
    printf("a ^ b in Hex = 0x%x\n", a ^ b);

    // Perform NOT operation on a and b and print results
    printf("~a in Decimal  = %d\n",a = ~a);
    //printf("~b in decimal = %d\n", b = ~b);

    // Perform Left shift bit operation on b and print results
    // Ask for user input for bit shifting.
    int shift;
    printf("Please enter number between 1 to 7 for left shifting b:");
    scanf("%d", &shift);
    printf("Left shift b: %d\n", shift);
    printf("Left shift b: %d\n", b << shift);

    // Perform Right shift bit operation on b and print results with same User input.
    printf("Right shift b: %d\n", b >> shift);

    return 0;

}
