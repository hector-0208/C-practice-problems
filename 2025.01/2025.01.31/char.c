#include <stdio.h>
void main()
{
	char a, b; //we declare two characters
	printf("Enter first character: ");
	scanf("%c", &a);
	printf("Enter second character: ");
	scanf(" %c", &b);
	//Now we will print their sum
	printf("Sum: %d\n", a+b);
}
