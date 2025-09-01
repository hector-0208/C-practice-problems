/*Write a C program to multiply two matrices.*/
#include <stdio.h>
int main()
{
	int r1, c1, r2, c2;
	printf("Enter the value of rows and columns of 1st matrix: ");
	scanf("%d %d", &r1, &c1);
	int A[r1][c1];
	printf("Enter the values in row wise fashion: ");
	for(int i = 0; i < r1; i++)
	{
		for(int j = 0; j < c1; j++)
		{
			scanf(" %d", &A[i][j]);
		}
	}
	printf("Enter the value of rows and columns of 2nd matrix: ");
	scanf("%d %d", &r2, &c2);
	int B[r2][c2];
	printf("Enter the values in row wise fashion: ");
	for(int i = 0; i < r2; i++)
	{
		for(int j = 0; j < c2; j++)
		{
			scanf(" %d", &B[i][j]);
		}
	}
	if(c1 == r2)
	{
		int C[r1][c2];
		printf("The product of the two matrices is:\n");
		for (int i = 0; i < r1; i++)
		{
			for(int j = 0; j < c2; j++)
			{
				C[i][j] = 0;
				for(int k = 0; k < c1; k++) // could use k < r2 as well
				{
					C[i][j] += A[i][k] * B[k][j];
				}
				printf("%2d ", C[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Can't multiply the given matrices\n");
	
	return 0;
}
