/*Write a program to count the number of times a substring appears in a string.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    
    char substr[100];
    printf("Enter the substring: ");
    gets(substr);
    
    int count = 0;
    int mainLen = strlen(str);
    int subLen = strlen(substr);

    for (int i = 0; i <= mainLen - subLen; i++)
    {
        int matches = 1;

        for (int j = 0; j < subLen; j++)
        {
            if (str[i + j] != substr[j])
            {
                matches = 0;
                break;
            }
        }

        if (matches == 1)
        {
            count++;
        }
    }

    printf("String: %s\n", str);
    printf("Substring: %s\n", substr);
    printf("Occurrences: %d\n", count);

    return 0;
}
