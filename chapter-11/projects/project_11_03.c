/*
 * Chapter 11, Project 3 - Fraction Reducer (Modular Version)
 *
 * This program asks the user to enter a fraction and then reduces it
 * to lowest terms using Euclid's algorithm, implemented in a separate function.
 */

#include <stdio.h>

// Reduces the given fraction to lowest terms.
// Inputs: numerator, denominator
// Outputs (via pointers): reduced_numerator, reduced_denominator
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, gcd, n = numerator, d = denominator;

    // Compute GCD using Euclid's algorithm
    while (d > 0)
    {
        remainder = n % d;
        n = d;
        d = remainder;
    }
    gcd = n;

    // Store reduced results
    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}

int main(void)
{
    int numerator, denominator;
    int reduced_num, reduced_den;

    printf("Enter a fraction (format: a/b): ");
    if (scanf("%d/%d", &numerator, &denominator) != 2 || denominator == 0)
    {
        printf("Invalid input. Please enter a valid fraction (e.g., 4/5), and denominator must not be zero.\n");
        return 1;
    }

    reduce(numerator, denominator, &reduced_num, &reduced_den);

    printf("In lowest terms: %d/%d\n", reduced_num, reduced_den);

    return 0;
}
