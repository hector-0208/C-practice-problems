// Write a C program that finds the surface area of a few shapes
#include <stdio.h>
#define PI 3.14159265

int main()
{
	int length, width, height, slant_height, radius;

	printf("Enter the length, width, height, slant height, and radius: ");
	scanf("%d %d %d %d %d", &length, &width, &height, &slant_height, &radius);

	printf("Surface Area of Cube = %d\n", 6 * length * length);
	printf("Surface Area of Cuboid = %d\n", 2 * (length * width + width * height + length * height));
	printf("Surface Area of Sphere = %.2f\n", 4 * PI * radius * radius);
	printf("Surface Area of Cylinder = %.2f\n", 2 * PI * radius * (radius + height));
	printf("Surface Area of Cone = %.2f\n", PI * radius * (slant_height + radius));

	return 0;
}
