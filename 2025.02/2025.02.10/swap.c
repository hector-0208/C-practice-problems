/*Write a program in C to swap (i.e. interchange) the values of twovariables. Take the variables as input from the user and display the variables' values after swapping.*/
#include <stdio.h>

int main()
{
	float x, y, temp;
	
	printf("Enter two values for x and y: ");
	scanf("%f %f", &x, &y);
	
	/*Alternative way of swapping the variables
	temp = x;
	x = y;
	y = temp;*/
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf("The new values of x and y are:\nx=%f\ny=%f\n", x, y);
	
	return 0;
}
