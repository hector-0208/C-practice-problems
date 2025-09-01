// Code that takes two integers as user input and performs the basic arithmetic operations on them
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %.2f\n", (float)num1 / num2);
    
    return 0;
}