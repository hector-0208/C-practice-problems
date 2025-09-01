// Write a C program to convert degrees to radians and find its sin, cos and tan values for a given input.

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
	double degree, radian;

	printf("Enter a value(in degrees): ");
	scanf("%lf", &degree);

	radian = degree * (PI / 180);

	printf("The sine value is = %.2lf\n", sin(radian));
	printf("The cosine value is = %.2lf\n", cos(radian));
	printf("The tangent value is = %.2lf\n", tan(radian));

	return 0;
}
