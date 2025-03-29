/*
 * Chapter 11, Exercise 8 – Find Largest Element Pointer
 * ------------------------------------------------------
 * This function finds the largest element in an array and returns
 * a pointer to that element.
 *
 * Example:
 * --------
 * Input:
 *   Enter array size: 5
 *   Enter 5 numbers: 3 17 5 8 9
 * Output:
 *   The largest element is: 17
 */

#include <stdio.h>

int *find_largest(int a[], int n)
{
    int *largest = &a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            largest = &a[i];
        }
    }

    return largest;
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int *max_ptr = find_largest(a, size);

    printf("The largest element is: %d\n", *max_ptr);

    return 0;
}
