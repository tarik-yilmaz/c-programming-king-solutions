/*
 * Chapter 2, Project 8 – Loan Balance Calculation
 * ------------------------------------------------
 * This program calculates the remaining balance of a loan after 
 * three monthly payments, considering the monthly interest rate.
 *
 * Formula:
 *      New Balance = (Current Balance * (1 + Monthly Interest Rate)) - Monthly Payment
 *
 * Key Concepts:
 *  - Using `scanf()` to get user input.
 *  - Computing the monthly interest rate from an annual percentage.
 *  - Iteratively updating the loan balance over multiple payments.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.72
 */

 #include <stdio.h>

 int main(void) {
     // Declare variables for loan amount, interest rate, monthly payment, and balance
     float loan, interest_rate, payment, balance;
 
     // Prompt the user for input values
     printf("Enter amount of loan: ");
     scanf("%f", &loan);
 
     printf("Enter interest rate (annual percentage): ");
     scanf("%f", &interest_rate);
 
     printf("Enter monthly payment: ");
     scanf("%f", &payment);
 
     // Compute the monthly interest rate
     float monthly_interest_rate = (interest_rate / 100) / 12;
 
     // Initialize balance with the loan amount
     balance = loan;
 
     // Compute and display the balance after each payment
     balance = balance * (1 + monthly_interest_rate) - payment;
     printf("Balance remaining after first payment: $%.2f\n", balance);
 
     balance = balance * (1 + monthly_interest_rate) - payment;
     printf("Balance remaining after second payment: $%.2f\n", balance);
 
     balance = balance * (1 + monthly_interest_rate) - payment;
     printf("Balance remaining after third payment: $%.2f\n", balance);
 
     return 0;
 }
 