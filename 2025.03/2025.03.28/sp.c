/*Write a C program to find the sum and product of all elements in an array.*/
#include <stdio.h>
int main()
{
	int n, sum = 0, prod = 1;
	
	printf("Enter the size of the array: ");
	scanf(" %d", &n);
	int A[n];
	printf("Enter %d elements: ", n);
	
	for (int i = 0; i<n; i++)
	{
		scanf(" %d", &A[i]);
		sum+=A[i];
		prod*=A[i];
	}
	
	printf("The sum of the elements of the array is %d\n", sum);
	printf("The product of the elements of the array is %d\n", prod);
	
	return 0;
}
