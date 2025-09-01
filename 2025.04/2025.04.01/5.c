/*Write a C program to generate a required 5x5 matrix with the right hand diagonal elements as 0, upper left triangle as 1, and lower right triangle as -1.*/
#include <stdio.h>
int main()
{
	int a[5][5] = {0};

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j< 5; j++)
		{
			if((i + j) == 4)
			a[i][j] = 0;
			if((i + j) < 4)
			a[i][j] = 1;
			if((i + j) > 4)
			a[i][j] = -1;
			
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
