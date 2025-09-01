/*Write a C program that uses a loop to generate the first N Fibonacci numbers.*/
#include <stdio.h>

int main()
{
	unsigned long int fib1 = 0, fib2 = 1, next;
	int n;

	printf("Enter the numbers of fibonacci numbers to generate: ");
	scanf(" %d", &n);
	if (n <= 0)
	{
		printf("Please enter a positive number as input");
	}
	if (n >= 1)
	{
		printf("%lu", fib1);
	}
	if (n >= 2)
	{
		printf(",%lu", fib2);
	}
	for (int i = 3; i <= n; i++)
	{
		next = fib1 + fib2;
		printf(",%lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	return 0;
}
