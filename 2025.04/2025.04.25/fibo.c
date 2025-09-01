/*Write a recursive function to generate the Fibonacci series.*/
#include <stdio.h>

int fib(int n)
{
	if(n == 1)
	{
		return 0;
	}
	else if(n == 2 || n == 3)
	{
		return 1;
	}
	else
	{
		return (fib (n - 1) + fib (n - 2));
	}
}
void printfib(int n)
{
	if(n <= 0)
	{
		printf("Can't compute fibonacci series for nth term\n");
	}
	else
	{
		printf("The required series is: ");
		for(int i = 1; i <= n; i++)
		{
			printf("%d ", fib(i));
		}
	}
	printf("\n");
}
int main()
{
	int n;
	
	printf("Enter the number of terms you want: ");
	scanf(" %d", &n);
	
	printfib(n);
	return 0;
}
