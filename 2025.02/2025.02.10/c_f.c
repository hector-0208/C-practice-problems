/*Write a C program to convert celsius to fahrenheit or vice-versa, based on the user's choice.*/
#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	int choice;
	
	printf("What do you wish to do:\n1)Celsius to Fahrenheit\n2)Fahrenheit to Celsius\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter the value of Celsius: ");
			scanf("%f", &celsius);
			printf("The respective Fahrenheit value is: %f\n", (9.0/5.0)*celsius + 32);
		break;
		
		case 2:
			printf("Enter the value of Fahrenheit: ");
			scanf("%f", &fahrenheit);
			printf("The respective Celsius value is: %f\n", (5.0/9.0)*(fahrenheit - 32));
		break;
		
		default:
			printf("Invalid choice");
		break;
	}
	return 0;
}

