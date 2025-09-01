/*Write a C program to create a restaurant billing system.
· Use a loop to allow multiple orders for a customer.
· Display a menu using switch case:

1. Pizza - ₹250
2. Burger - ₹150
3. Pasta - ₹200
4. Exit
· Ask the user to enter their choice and quantity.
· Use if-else to calculate the bill and apply a 10% discount if the
total exceeds ₹500.
· The program should run till the user wants to calculate bill for
various customers (Use do while).*/
#include <stdio.h>
#define DISCOUNT 10 / 100
int main()
{
	int choice, quantity;
	char option = 'y';
	int total = 0;
	do
	{
		printf("New Customer\n");
		do
		{
			printf("Menu:\n1. Pizza - Rs 250\n2. Burger - Rs 150\n3. Pasta - Rs 200\n4. Exit\n");
			printf("Enter your choice: ");
			scanf(" %d", &choice);
			switch (choice)
			{
			case 1:
				printf("Enter the quantity: ");
				scanf(" %d", &quantity);
				total += 250 * quantity;
				break;
			case 2:
				printf("Enter the quantity: ");
				scanf(" %d", &quantity);
				total += 150 * quantity;
				break;
			case 3:
				printf("Enter the quantity: ");
				scanf(" %d", &quantity);
				total += 200 * quantity;
				break;
			case 4:
				printf("Exiting...");
				printf("Do you wish to order more? Press 'y' if yes, else press 'n':");
				scanf(" %c", &option);
				break;
			default:
				printf("Invalid choice");
				break;
			}
		} while (option == 'y' || option == 'Y');

		if (total >= 500)
		{
			printf("Your total (with 10 percent) discount  is %d\n", (total - total * DISCOUNT));
		}
		else
		{
			printf("Your total is %d\n", total);
		}
		printf("Do you wish to continue for another customer?\n");
		printf("Press 'y' if yes, else press 'n': ");
		scanf(" %c", &option);
	} while (option == 'y' || option == 'Y');
	return 0;
}
