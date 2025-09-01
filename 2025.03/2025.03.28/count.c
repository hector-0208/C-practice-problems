/*Write a C program to count the number of even and odd numbers in an array.*/
#include <stdio.h>

int main()
{
	int countE = 0,countO = 0, n;
	printf("Enter the size of the array: ");
	scanf(" %d", &n);
	int A[n];
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &A[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(A[i] % 2 == 0)
		{
			countE++;
		}
		else
		{
			countO++;
		}
	}
	printf("The number of Even numbers are %d\n", countE);
	printf("The number of Odd numbers are %d\n", countO);
}
