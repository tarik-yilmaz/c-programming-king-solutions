/*
 * Chapter 2, Project 4 – Sales Tax Calculation
 * --------------------------------------------
 * This program prompts the user to enter a monetary amount in dollars and cents.
 * It then calculates and displays the total amount after adding a 5% sales tax.
 *
 * Formula:
 *      total = amount + (amount * tax_rate)
 *
 * Key Concepts:
 *  - Using `scanf()` for user input.
 *  - Applying a percentage increase.
 *  - Formatting floating-point output to two decimal places.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter amount: 100.00
 * With tax added: $105.00
 */

 #include <stdio.h>

 int main(void) {
     // Define constants
     const float TAX_RATE = 0.05f;
 
     // Declare a variable to store the user-inputted amount
     float amount;
 
     // Prompt the user to enter an amount
     printf("Enter amount: ");
     scanf("%f", &amount);
 
     // Calculate the total amount with tax
     float total = amount * (1 + TAX_RATE);
 
     // Display the total amount formatted to 2 decimal places
     printf("With tax added: $%.2f\n", total);
 
     return 0;
 }
 