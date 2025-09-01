/*Write a program to swap two numbers using call by value and call by reference.*/
#include <stdio.h>

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void callByRef(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 0, y = 0;
    printf("Enter the values of x and y: ");
    scanf(" %d %d", &x, &y);
    callByValue(x, y);
    printf("Values after call by value:\nx = %d\ny = %d\n", x, y);
    callByRef(&x, &y);
    printf("Values after call by reference:\nx = %d\ny = %d\n", x, y);

    return 0;
}