/*Write a C program to merge two sorted arrays into a single sorted array.*/
#include <stdio.h>
int main()
{
	int n1, n2;
	printf("Enter the size of the 1st array: ");
	scanf(" %d", &n1);
	int A[n1];
	printf("Enter %d sorted elements:", n1);
	for(int i = 0; i < n1; i++)
	{
		scanf(" %d", &A[i]);
	}

	printf("Enter the size of the 2nd array: ");
	scanf(" %d", &n2);
	int B[n2];
	printf("Enter %d sorted elements:", n2);
	for(int i = 0; i < n2; i++)
	{
		scanf(" %d", &B[i]);
	}

	int C[n1 + n2];
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < n1 || j < n2)
	{
		if(A[i] < B[j])
		{
			C[k] = A[i];
			i++;
		}
		else
		{
			C[k] = B[j];
			j++;
		}
		k++;
	}
	printf("The merged sorted array: ");
	for(int i = 0; i < n1 + n2; i++)
	{
		printf(" %d", C[i]);
	}
	printf("\n");

	return 0;
}
