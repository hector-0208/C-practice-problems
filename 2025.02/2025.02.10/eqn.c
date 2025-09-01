/*Write a program in C to solve the following equation. Take the values of x, y, z as input from the user and display the value of u as output.
All the variables should be float type values.
u=10x^3+5y^2-2z
*/
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z, u;
	
	printf("Enter values of x, y, z: ");
	scanf("%f %f %f", &x, &y, &z);

	u = 10*pow(x, 3) + 5*pow(y, 2) - 2*z;
	printf("Now for the equation, u = 10x^3 + 5y^2 - 2z\nu = %.2f\n", u);
	
	return 0; 
}