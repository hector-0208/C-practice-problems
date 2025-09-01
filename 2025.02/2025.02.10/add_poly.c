/*Write a C program to add two polynomials of degree 4 (where y is the variable), as given below, and print the sum, taking the coefficients
a1, b1, c1, d1, k1, a2, b2, c2, d2, k2 as input from the user.
a1y^4+b1y^3+c1y^2+d1y+k^1
azy^4+b2y^3+c2y^2+d2y+k^2*/
#include <stdio.h>

int main()
{
	int a1, b1, c1, d1, k1, a2, b2, c2, d2, k2;
	
	printf("Enter the values of the coefficients in the equation\na1y^4 + b1y^3 + c1y^2 + d1y + k1: ");
	scanf("%d %d %d %d %d", &a1, &b1, &c1, &d1, &k1);
	printf("Enter the values of the coefficients in the equation\na2y^4 + b2y^3 + c2y^2 + d2y + k2: ");
	scanf("%d %d %d %d %d", &a2, &b2, &c2, &d2, &k2);

	printf("The sum of the polynomials is = %d^2 + %d^3 + %dy^2 + %dy + %d\n", a1+a2, b1+b2, c1+c2, d1+d2, k1+k2);
	
	return 0;
}
