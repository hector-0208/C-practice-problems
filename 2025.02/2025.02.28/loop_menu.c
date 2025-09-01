#include <stdio.h>
int main()
{
    int option, n;
    char choice;

    do
    {
        printf("Please select an option:\n");
        printf("1. For Loop: Sum of first N natural numbers\n");
        printf("2. While Loop: Check divisibility by 2, 3, or 6 from 1 to N\n");
        printf("3. Do-While Loop: Calculate factorial of N\n");
        scanf("%d", &option);
        
        printf("Enter the value of N: ");
        scanf("%d", &n);

        switch (option)
        {
        case 1:
        {
            int i, sum = 0;
            for (i = 1; i <= n; i++)
            {
                sum += i;
            }
            printf("Sum of first %d natural numbers = %d\n", n, sum);
        }
        break;

        case 2:
        {
            int i;
            printf("Numbers from 1 to %d:\n", n);
            printf("Divisible by 2: ");
            i = 1;
            while (i <= n)
            {
                if (i % 2 == 0)
                {
                    printf("%d ", i);
                }
                i++;
            }
            printf("\nDivisible by 3: ");
            i = 1;
            while (i <= n)
            {
                if (i % 3 == 0)
                {
                    printf("%d ", i);
                }
                i++;
            }
            printf("\nDivisible by 6: ");
            i = 1;
            while (i <= n)
            {
                if (i % 6 == 0)
                {
                    printf("%d ", i);
                }
                i++;
            }
        }
        break;

        case 3:
        {
            if (n < 0)
            {
                printf("Factorial is undefined for negative numbers.\n");
            }
            else if (n == 0 || n == 1)
            {
                printf("Factorial of %d is 1\n", n);
            }
            else
            {
                unsigned long long factorial = 1;
                int i = 1;
                do
                {
                    factorial *= i;
                    i++;
                } while (i <= n);
                printf("Factorial of %d = %llu\n", n, factorial);
            }
        }
        break;

        default:
            printf("Invalid choice.\n");
        }

        printf("\nEnter 'y' to continue the program or 'n' to stop: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
/*Please select an option:
1. For Loop: Sum of first N natural numbers
2. While Loop: Check divisibility by 2, 3, or 6 from 1 to N
3. Do-While Loop: Calculate factorial of N
1
Enter the value of N: 10
Sum of first 10 natural numbers = 55

Enter 'y' to continue the program or 'n' to stop: y
Please select an option:
1. For Loop: Sum of first N natural numbers
2. While Loop: Check divisibility by 2, 3, or 6 from 1 to N
3. Do-While Loop: Calculate factorial of N
2
Enter the value of N: 10
Numbers from 1 to 10:
Divisible by 2: 2 4 6 8 10
Divisible by 3: 3 6 9
Divisible by 6: 6

Enter 'y' to continue the program or 'n' to stop: y
Please select an option:
1. For Loop: Sum of first N natural numbers
2. While Loop: Check divisibility by 2, 3, or 6 from 1 to N
3. Do-While Loop: Calculate factorial of N
3
Enter the value of N: 25
Factorial of 25 = 7034535277573963776

Enter 'y' to continue the program or 'n' to stop: n*/