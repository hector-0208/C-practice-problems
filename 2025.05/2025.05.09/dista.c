/*Write a program that finds the distance (in terms of elements) between two pointers (maximum and minimum elements) in an array.*/
#include <stdio.h>

int distance(int *ptr, int n)
{
    int *max = ptr;
    int *min = ptr;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > *max)
        {
            max = (ptr + i);
        }
        if (*(ptr + i) < *min)
        {
            min = (ptr + i);
        }
    }
    int dist = max - min;
    if(dist < 0)
    {
        dist = -dist;
    }
    return dist;
}

int main()
{
    int n;
    int arr[n], *ptr = arr;
    printf("Enter size of array: ");
    scanf(" %d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", ptr + i);
    }
    printf("The distance between the maximum and minimum elements of the array is %d\n", distance(ptr, n));

    return 0;
}