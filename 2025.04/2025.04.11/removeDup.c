/*Write a program to remove duplicate characters from a string.*/
#include <stdio.h>

int main()
{
    char str[100];
    char result[100];
    int resultIndex = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int isDuplicate = 0;

        for (int j = 0; j < resultIndex; j++)
        {
            if (str[i] == result[j])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0)
        {
            result[resultIndex] = str[i];
            resultIndex++;
        }
    }

    result[resultIndex] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}