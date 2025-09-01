#include <stdio.h>
#include <math.h>
int main()
{
	printf("Type\t\t\tSize\tRange\n");

	int bytes_char = sizeof(char);
	printf("char\t\t\t%d \t%.0lf to %.0lf\n", bytes_char, pow(-(2), (bytes_char * 8 - 1)), pow(2, bytes_char * 8 - 1) - 1);

	int bytes_uchar = sizeof(unsigned char);
	printf("Unsigned char\t\t%d \t0 to %.0lf\n", bytes_uchar, pow(2, bytes_uchar * 8));

	int bytes_int = sizeof(int);
	printf("int\t\t\t%d \t%.0lf to %.0lf\n", bytes_int, pow(-(2), (bytes_int * 8 - 1)), pow(2, bytes_int * 8 - 1) - 1);

	int bytes_uint = sizeof(unsigned int);
	printf("Unsigned int\t\t%d \t0 to %.0lf\n", bytes_uint, pow(2, bytes_uint * 8));

	int bytes_sint = sizeof(short int);
	printf("Short int\t\t%d \t%.0lf to %.0lf\n", bytes_sint, pow(-(2), (bytes_sint * 8 - 1)), pow(2, bytes_sint * 8 - 1) - 1);

	int bytes_usint = sizeof(unsigned short int);
	printf("Unsigned Short int\t%d \t0 to %.0lf\n", bytes_usint, pow(2, bytes_usint * 8));

	int bytes_lint = sizeof(long int);
	printf("Long int\t\t%d \t%.0lf to %.0lf\n", bytes_lint, pow(-(2), (bytes_lint * 8 - 1)), pow(2, bytes_lint * 8 - 1) - 1);

	int bytes_ulint = sizeof(unsigned long int);
	printf("Unsigned Long int\t%d \t0 to %.0lf\n", bytes_ulint, pow(2, bytes_ulint * 8));

	int bytes_llint = sizeof(long long int);
	printf("Long Long int\t\t%d \t%.0lf to %.0lf\n", bytes_llint, pow(-(2), (bytes_llint * 8 - 1)), pow(2, bytes_llint * 8 - 1) - 1);

	int bytes_ullint = sizeof(unsigned long long int);
	printf("Unsigned Long Long int\t%d \t0 to %.0lf\n", bytes_ullint, pow(2, bytes_ullint * 8));

	int bytes_float = sizeof(float);
	printf("float\t\t\t%d \t%.0lf to %.0lf\n", bytes_float, pow(-(2), (bytes_float * 8 - 1)), pow(2, bytes_float * 8 - 1) - 1);

	int bytes_double = sizeof(double);
	printf("double\t\t\t%d \t%.0lf to %.0lf\n", bytes_double, pow(-(2), (bytes_double * 8 - 1)), pow(2, bytes_double * 8 - 1) - 1);

	return 0;
}
