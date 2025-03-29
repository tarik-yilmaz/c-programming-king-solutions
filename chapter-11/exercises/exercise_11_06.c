/*
 * Chapter 11, Exercise 6
 *
 * Write a function to find the largest and second largest elements in an array.
 * This version avoids using INT_MIN by initializing with actual array values.
 */

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    // Initialize largest and second largest based on the first two elements
    if (a[0] > a[1])
    {
        *largest = a[0];
        *second_largest = a[1];
    }
    else
    {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest && a[i] != *largest)
        {
            *second_largest = a[i];
        }
    }
}

int main(void)
{
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if (size < 2)
    {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int array[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int largest, second_largest;
    find_two_largest(array, size, &largest, &second_largest);

    printf("The largest number is: %d\n", largest);
    printf("The second largest number is: %d\n", second_largest);

    return 0;
}
