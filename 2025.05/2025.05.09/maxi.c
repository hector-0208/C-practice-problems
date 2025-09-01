/*Given an array of 10 integers, write a program to find the maximum element using pointer arithmetic.*/
#include <stdio.h>

int max(int *ptr, int n)
{
    int maxE = ptr;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > maxE)
            maxE = *(ptr + i);
    }
    return maxE;
}

int main()
{
    int n = 10;
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", ptr + i);
    }
    printf("The maximum element in the array is: %d\n", max(ptr, n));

    return 0;
}