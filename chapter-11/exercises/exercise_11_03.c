/*
 * Chapter 11, Exercise 3
 *
 * This program computes the sum and average of a given array.
 * The original function contained errors in pointer usage, which have been corrected.
 */

#include <stdio.h>

/*
 * Computes the sum and average of an array `a` with length `n`.
 * The results are stored in the memory locations pointed to by `avg` and `sum`.
 */
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}

int main(void)
{
    double data[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double average, total;

    avg_sum(data, 5, &average, &total);

    printf("Sum: %.2f\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
