/*Write a C program to compute the sum of the following series up to N terms:
S=1-2+3-4+5-6+...±N*/
#include <stdio.h>
int main()
{
	int n;
	long int sum=0;
	printf("Enter the value of N: ");
	scanf(" %d", &n);
	for(int i = 1;i <= n;i++)
	{
		if (i % 2 == 0)
		{
			sum-=i;
		}
		else
		{
			sum+=i;
		}
	}
	printf("S=1-2+3...+-N= %ld\n", sum);
	
	return 0;
}
