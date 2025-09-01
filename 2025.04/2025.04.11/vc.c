/*Write a program to count the number of vowels and consonants in a string.*/
#include <stdio.h>

int main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);

	int vowelCount = 0;
	int consonantCount = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		char ch = str[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
		}
		if (ch >= 'a' && ch <= 'z')
		{
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
				vowelCount++;
			}
			else
			{
				consonantCount++;
			}
		}
		i++;
	}

	printf("Vowel count: %d\n", vowelCount);
	printf("Consonant count: %d\n", consonantCount);

	return 0;
}