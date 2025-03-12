/*
 * Chapter 2, Project 7 – Breaking Down a Dollar Amount into Bills
 * ----------------------------------------------------------------
 * This program asks the user to enter a U.S. dollar amount and calculates 
 * the smallest number of $20, $10, $5, and $1 bills needed to make up 
 * that amount.
 *
 * Approach:
 *  - Use integer division (`/`) to determine how many bills of each 
 *    denomination are needed.
 *  - Use the modulus operator (`%`) to find the remaining amount.
 *  - Work from largest to smallest bill denomination to minimize the total count.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

 #include <stdio.h>

 int main(void) {
     int dollar, remaining, bills;
 
     // Prompt the user to enter a dollar amount
     printf("Enter a dollar amount: ");
     scanf("%d", &dollar);
 
     // Calculate the number of $20 bills and update the remaining amount
     bills = dollar / 20;
     printf("$20 bills: %d\n", bills);
     remaining = dollar % 20;
 
     // Calculate the number of $10 bills and update the remaining amount
     bills = remaining / 10;
     printf("$10 bills: %d\n", bills);
     remaining %= 10;
 
     // Calculate the number of $5 bills and update the remaining amount
     bills = remaining / 5;
     printf("$5 bills: %d\n", bills);
     remaining %= 5;
 
     // The remaining amount consists of only $1 bills
     printf("$1 bills: %d\n", remaining);
 
     return 0;
 }
 