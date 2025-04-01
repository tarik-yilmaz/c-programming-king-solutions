/*
 * Chapter 11, Project 1 – Dollar Breakdown with Pointers
 * ------------------------------------------------------
 * This program modifies a previous project by using a function that receives
 * a dollar amount and calculates the minimal number of $20, $10, $5, and $1 bills.
 *
 * The results are returned via pointer parameters.
 */

#include <stdio.h>

// Function to compute bill breakdown
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int remaining;

    *twenties = dollars / 20;
    remaining = dollars % 20;

    *tens = remaining / 10;
    remaining %= 10;

    *fives = remaining / 5;
    remaining %= 5;

    *ones = remaining;
}

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("Enter amount of dollars: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills:  %d\n", fives);
    printf("$1 bills:  %d\n", ones);

    return 0;
}
