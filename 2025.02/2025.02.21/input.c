/*A C program contains the following statements.
#include <stdio.h>
int a, b;
float x, y;
Suppose the value 12 is to be entered into the computer and assigned to a, -8 assigned to b, 0.011 assigned to x and -2.2 x 10^6 assigned to y. Show the input data might most conveniently be entered for each of the following scanf functions
a) scanf ("%d %d %f%f", &a, &b, &x, &y);
b) scanf("%d %d %e%e", &a, &b, &x, &y);
c) scanf("%2d%2d %5f%6e", &a, &b, &x, &y);
d) scanf ("%3d%3d%8f%8e", &a, &b, &x, &y);
Enter the input and for each input and print the corresponding output.*/
#include <stdio.h>

int main()
{
	int a, b;
	float x, y;
	printf("Enter the values for a(12), b(-8), x(0.011), and y(-2,2*10^6) for each case: ");
	printf("\na): ");
	scanf("%d %d %f %f", &a, &b, &x, &y);
	printf("a=%d b=%d x=%f y=%f\n", a, b, x, y);

	printf("\nb): ");
	scanf("%d %d %e%e", &a, &b, &x, &y);
	printf("a=%d b=%d x=%e y=%e\n", a, b, x, y);

	printf("\nc): ");
	scanf("%2d%2d %5f%6e", &a, &b, &x, &y);
	printf("a=%2d b=%2d x=%5f y=%6e\n", a, b, x, y);

	printf("\nd): ");
	scanf("%3d%3d%8f%8e", &a, &b, &x, &y);
	printf("a=%3d b=%3d x=%8f y=%8e\n", a, b, x, y);

	return 0;
}
