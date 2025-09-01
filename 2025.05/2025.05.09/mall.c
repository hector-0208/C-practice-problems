/*Write a C program for array of structures which performs the following tasks:
a) Reads the details of n shops(limit n to 5 at runtime).
b) Displays the details of all shops in a tabular format.
c) Calculate and display the total yearly rent collected by the mall.
d) Identify and display the shop(s) paying the highest rent.*/
#include <stdio.h>

struct shops {
    char name[50];
    char type[50];
    float rent;
};

int main()
{
    int n = 5;
    struct shops shop[n];
    float totalRent = 0, highestRent = 0;
    printf("Enter the details of the shops:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nFor shop %d\n", i + 1);
        printf("Shop name: ");
        scanf(" %s", shop[i].name);
        printf("Shop type: ");
        scanf(" %s", shop[i].type);
        printf("Monthly rent: ");
        scanf(" %f", &shop[i].rent);

        totalRent += (shop[i].rent * 12);
        if (shop[i].rent > highestRent)
        {
            highestRent = shop[i].rent;
        }
    }
    printf("\nShop Details:\n");
    printf("%-20s %-20s %-15s\n", "Name", "Type", "Rent");
    for (int i = 0; i < n; i++)
    {
        printf("%-20s %-20s %-15.2f", shop[i].name, shop[i].type, shop[i].rent);
        printf("\n");
    }
    printf("\nThe total rent collected (in one year): %.2f\n", totalRent);
    printf("\nThe shops with the highest rent are:\n");
    printf("%-20s %-20s %-15s\n", "Name", "Type", "Rent");
    for (int i = 0; i < n; i++)
    {
        if (shop[i].rent == highestRent)
        {
            printf("%-20s %-20s %-15.2f", shop[i].name, shop[i].type, shop[i].rent);
            printf("\n");
        }
    }
    return 0;
}