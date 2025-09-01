// Write a C program that finds the volume of a few shapes
#include <stdio.h>
#define PI 3.14159265

int main()
{
	int length, width, height, radius;
	
	printf("Enter the length, width, height, and radius: ");
	scanf("%d %d %d %d", &length, &width, &height, &radius);
	
	printf("Volume of Cube = %d\n", length * length * length);
	printf("Volume of Cuboid = %d\n", length * width * height);
	printf("Volume of Sphere = %.2f\n", (4.0f/3.0f) * PI * radius * radius * radius);
	printf("Volume of Cylinder = %.2f\n", PI * radius * radius * height);
	printf("Volume of Cone = %.2f\n", (1.0f/3.0f) * PI * radius * radius * height);

	return 0;
}
