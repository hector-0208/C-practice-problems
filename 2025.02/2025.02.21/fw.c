//Write a C program to print given values with required minimum field width.
#include <stdio.h>

int main()
{
	float x = 1234.5678;
	float y = 0.0012;
	float z = -12.34;
	
	printf("Values of variables with field width = 8, decimal places = 4: \nx=%8.4f, y=%8.4f, z=%8.4f\n\n", x, y, z);
	printf("Value of (x*y),(x/2) with field width = 9, decimal places = 3: \n(x*y)=%9.3f, (x/2)=%9.3f\n", x*y, x/2);
	
	return 0;
}
