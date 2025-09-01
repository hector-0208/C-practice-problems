// Write a C program that takes a decimal number and prints its floor and ceiling values.

#include <stdio.h>
#include <math.h>

int main()
{
	double num;
	
	printf("Enter a decimal number: ");
	scanf("%lf", &num);
	
	printf("Floor of number is = %lf\n", floor(num));
	printf("Ceiling of number is = %lf\n", ceil(num));
	
	return 0;
} 
