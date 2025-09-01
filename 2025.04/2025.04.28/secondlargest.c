/*Write a function int secondLargest(int arr[], int n) that returns the second largest element in the array.*/
#include<stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, secLargest; 
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secLargest = arr[1];
    }
    else
    {
        secLargest = arr[0];
        largest = arr[1];
    }
    for (int i = 2; i < n; i ++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secLargest)
        {
            secLargest = arr[i];
        }
    }
    return secLargest;
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
    printf("The second largest element of the array is = %d\n", secondLargest(arr, n));
    return 0;
}