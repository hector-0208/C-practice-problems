/*Write a C program to compute the sum of the sine series expansion up to N terms for a given angle x in radians:*/
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double fact = 1, term, sin = 0, x;
	printf("Enter the value of x(in radians): ");
	scanf(" %lf", &x);
	printf("Enter the number of terms(N) to use: ");
	scanf(" %d", &n);
	int j = 1;
	for (int i = 1; i <= (2 * n - 1); i++)
	{
		fact *= i;

		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			if (j % 2 == 0)
			{
				sin -= (pow(x, i)) / fact;
			}
			else
			{
				sin += (pow(x, i)) / fact;
			}
			j++;
		}
	}
	printf("The required value of sin(x)= %lf\n", sin);
}
