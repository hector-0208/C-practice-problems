/*Write a C program to reverse the elements of an array.*/
#include <stdio.h>
int main()
{
	int n, x, temp;
	printf("Enter the size of the array: ");
	scanf(" %d", &n);
	int A[n];
	
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &A[i]);
	}

	if(n % 2 == 0)
	x = n/2;
	else
	x = n/2 + 1;
	
	for(int i = 0; i < x; i++)
	{
		temp = A[i];
		A[i] = A[n - i - 1];
		A[n - i -1] = temp;
	}
	
	printf("The Reversed array is:");
	for(int i = 0; i < n; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
	
	return 0;
}
