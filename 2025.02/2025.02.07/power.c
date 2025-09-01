// Write a C program to calculaye power of given number.

#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	
	printf("Enter the values of x and y for x power y: ");
	scanf("%lf %lf", &x, &y);
	
	printf("x power y= %lf\n", pow(x, y));
	
	return 0;
}
