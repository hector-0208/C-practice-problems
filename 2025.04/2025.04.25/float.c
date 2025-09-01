/*Write functions for below given tasks where the number taken as input is a floating-point number:
·Find right most digit of the integer part of the number.
·Find the integer part of the given number.
·Find the smallest integer not less than the number.
·Find the largest integer not greater than the number.
·Find the sum of all the digits in the real number given as input.
·Reverse the integer part of the number.
·Reverse the real number given as input.*/
#include <stdio.h>

int rightMost(double x)
{
	return ((int)x % 10);
}
int intPart(double x)
{
	return x;
}
int smallestInt(double x)
{
	int int_part = (int)x;
	if(x == int_part)
		return int_part;
	else
		return (int_part + 1);
}
int largestInt(double x)
{
	return (int)x;
}
int sumOfDigits(double x)
{
	x *= 1000000;
	int sum = 0;
	int temp = (int)x;
	while(temp != 0)
	{
		int digit = temp % 10;
		sum += digit;
		temp /= 10;
	}
	return sum;
}
int revInt(double x)
{
	int int_part = (int)x;
	int rev = 0;
	while(int_part != 0)
	{
		rev = rev * 10 + int_part % 10;
		int_part /= 10;
	}
	return rev;
}
double revNum(double x)
{
	int ndigits = 0;
	double temp = x;
	while (temp >= 1)
	{
		temp /= 10;
		ndigits++;
	}
	x *= 1000000;
	int rev = 0, int_part = (int)x;
	while (int_part != 0)
	{
		rev = rev * 10 + int_part % 10;
		int_part /= 10;
	}
	double result = rev;
	for(int i = 1; i <= ndigits; i++)
	{
		result /= 10.0;
	}
	return result;
}

int main()
{
	double n;
	printf("Enter a floating point number: ");
	scanf(" %lf", &n);
	printf("The integer part: %d\n", intPart(n));
	printf("The right most digit of integer part: %d\n", rightMost(n));
	printf("The smallest integer not less than the number: %d\n", smallestInt(n));
	printf("The largest integer not greater than the number: %d\n", largestInt(n));
	printf("Sum of all digits of real number: %d\n", sumOfDigits(n));
	printf("Reverse of integer part: %d\n", revInt(n));
	printf("Reverse of real number: %lf\n", revNum(n));
	
	return 0;
}
