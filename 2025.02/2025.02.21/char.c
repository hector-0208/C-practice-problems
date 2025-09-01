//scanf formatting program.
#include <stdio.h>

int main()
{
	char x[30],y[30];
	
	printf("Enter a string: ");
	scanf("%4c", x); x[4]='\0';
	printf("Value read: %s\n\n", x);
	
	scanf(" %4s", x);
	printf("Value read: %s\n\n", x);

	scanf(" %29[^\t]", y);
	printf("Value read(terminates after Tab): %s\n\n", y);
	
	scanf(" %29[a-e]", y);
	printf("Value read(terminates after it encounters anything besides a-e): %s\n", y);
	
	return 0;	
}
