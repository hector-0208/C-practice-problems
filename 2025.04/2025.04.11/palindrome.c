/*Write a program to check whether a string is a palindrome or not.*/
#include <stdio.h>

int main()
{
	_Bool flag = 1;
	char str[100];
	int length = 0, left = 0, right;

	printf("Enter a string: ");
	gets(str);

	while (str[length] != '\0')
	{
		length++;
	}
	right = length - 1;
	while (left < right)
	{
		if (str[left] != str[right])
		{
			flag = 0;
			break;
		}
		left++;
		right--;
	}
	if (flag == 1)
	{
		printf("%s is a palindrome\n", str);
	}
	else
	{
		printf("%s is not a palindrome\n", str);
	}

	return 0;
}