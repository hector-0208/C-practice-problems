/*/*Write a recursive function to generate the Factorial of an entered number.*/
#include<stdio.h>
int fact(int n)
{
	if (n < 0)
		printf("Can't compute factorial for negative numbers.\n");
	else if (n == 0)
		return 1;
	else
		return (n * fact(n - 1));
}

int main()
{
	int num;
	printf("Enter the number you wish to find factorial of: ");
	scanf(" %d", &num);
	printf("Factorial of %d is %d\n", num, fact(num));
	
	return 0;
}
