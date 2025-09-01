/*Write a C program to find the largest and smallest element in an array.*/
#include <stdio.h>
int main()
{
	int n;
	int largest,smallest;
	printf("Enter the size of the array: ");
	scanf(" %d", &n);
	int A[n];
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &A[i]);
	}
	
	largest=smallest=A[0];
	
	for(int i = 0; i < n; i++)
	{
		if(A[i]>=largest)
		{
			largest = A[i];
		}
		if(A[i]<=smallest)
		{
			smallest = A[i];
		}
	}
	printf("The largest element is %d\n", largest);
	printf("The smallest element is %d\n", smallest);

	return 0;
}
