/*Write a program that uses pointer arithmetic to calculate the sum of all elements in an array.*/
#include<stdio.h>

int sum(int a[], int n)
{
    int *pa = a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *pa;
        pa++;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf(" %d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("The sum of elements of array: %d\n", sum(arr, n));

    return 0;
}