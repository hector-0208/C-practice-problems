// Write a program that takes a number as input and prints its square, cube, square root, cube root, base-10 logarithm, and absolute value.

#include <stdio.h>
#include <math.h>

int main()
{
	double num;
	printf("Enter a number: ");
	scanf("%lf", &num);
	
	printf("It's square is = %.2lf\n", pow(num, 2));
	printf("It's cube is = %.2lf\n", pow(num, 3));
	printf("It's square root is = %.2lf\n", sqrt(num));
	printf("It's cube root is = %.2lf\n", cbrt(num));
	printf("It's base-10 logarithm is = %.2lf\n", log10(num));
	printf("It's absolute value is = %.2lf\n", fabs(num));
	
	return 0;
	
}
