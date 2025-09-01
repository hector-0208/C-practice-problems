/*Write a function to check if a number is an Armstrong number or not.*/
#include <stdio.h>

int power(int num, int exp)
{
    int result = 1;
    if (exp == 0)
    {
        return 1;
    }
    for (int i = 0; i < exp; i++)
    {
        result *= num;
    }
    return result;
}
int isArm(int num)
{
    int original = num;
    int sum = 0;
    int ndigits = 0;
    int temp = num;

    while (temp != 0)
    {
        ndigits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        int power_result = power(digit, ndigits);
        sum += power_result;
        temp /= 10;
    }
    return (sum == original);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf(" %d", &n);
    if (isArm(n))
        printf("%d is an Armstrong Number.\n", n);
    else
        printf("%d is not an Armstrong Number.\n", n);
    return 0;
}