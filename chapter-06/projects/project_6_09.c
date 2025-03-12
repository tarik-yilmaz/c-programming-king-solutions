/*
 * Chapter 6, Project 9 – Loan Balance Calculator with Multiple Payments
 * ----------------------------------------------------------------------
 * This program calculates the remaining balance on a loan after a series of monthly payments.
 * The user is prompted to enter:
 *   - The total loan amount.
 *   - The annual interest rate (as a percentage).
 *   - The monthly payment amount.
 *   - The number of payments to process.
 *
 * Process:
 * --------
 * 1. The remaining balance is initialized to the full loan amount.
 * 2. For each payment, the remaining balance is updated using the formula:
 *       remaining = (remaining * (1 + (interest / 100) / 12)) - payment;
 *    This applies the monthly interest and subtracts the payment.
 * 3. After each payment, the updated balance is displayed.
 *
 * Example Run:
 * ------------
 *  Enter amount of loan: 30000
 *  Enter interest rate: 6.0
 *  Enter monthly payment: 386.66
 *  Enter number of payments: 3
 *
 *  Balance remaining after payment 1: $29713.34
 *  Balance remaining after payment 2: $29425.25
 *  Balance remaining after payment 3: $29135.72
 *
 * Note:
 * -----
 * - The program assumes that the interest is compounded monthly.
 * - The loop terminates after processing the specified number of payments.
 */

 #include <stdio.h>

 int main(void) {
     float loan, payment, remaining, interest;
     int number_of_payments;
 
     // Prompt the user to enter the loan amount
     printf("Enter amount of loan: ");
     scanf("%f", &loan);
 
     // Prompt the user to enter the annual interest rate (percentage)
     printf("Enter interest rate: ");
     scanf("%f", &interest);
 
     // Prompt the user to enter the monthly payment amount
     printf("Enter monthly payment: ");
     scanf("%f", &payment);
 
     // Prompt the user to enter the number of payments
     printf("Enter number of payments: ");
     scanf("%d", &number_of_payments);
 
     // Initialize the remaining balance as the full loan amount
     remaining = loan;
 
     // Loop through each payment and update the remaining balance
     for (int i = 1; i <= number_of_payments; i++) {
         // Apply monthly interest and subtract the monthly payment
         remaining = (remaining * (1 + (interest / 100) / 12)) - payment;
 
         // Display the remaining balance after the current payment
         printf("Balance remaining after payment %d: $%.2f\n", i, remaining);
     }
 
     return 0; // End of program
 }
 