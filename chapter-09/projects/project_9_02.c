/*
 * Chapter 9, Project 2 – Income Tax Calculation Using Function
 * -------------------------------------------------------------
 * This program calculates the amount of income tax based on a user's taxable income.
 * It uses a separate function `tax_due` that encapsulates the tax logic and returns
 * the tax due based on income brackets.
 *
 * Tax Brackets:
 * -------------
 * - Up to $750           → 1%
 * - $750.01 – $2250      → $7.50 + 2% of amount over $750
 * - $2250.01 – $3750     → $37.50 + 3% of amount over $2250
 * - $3750.01 – $5250     → $82.50 + 4% of amount over $3750
 * - $5250.01 – $7000     → $142.50 + 5% of amount over $5250
 * - Over $7000           → $230.00 + 6% of amount over $7000
 *
 * Example:
 * --------
 * Input:  $50000
 * Output: Your tax due is: $3160.00
 */

 #include <stdio.h>

 // Function to calculate the tax based on income brackets
 double tax_due(double income) {
     if (income <= 0) 
        return 0;
     else if (income <= 750.00)
         return income * 0.01;
     else if (income <= 2250.00)
         return 7.50 + 0.02 * (income - 750);
     else if (income <= 3750.00)
         return 37.50 + 0.03 * (income - 2250);
     else if (income <= 5250.00)
         return 82.50 + 0.04 * (income - 3750);
     else if (income <= 7000.00)
         return 142.50 + 0.05 * (income - 5250);
     else
         return 230.00 + 0.06 * (income - 7000);
 }
 
 int main() {
     double income;
 
     // Ask user for their income
     printf("Enter your taxable income: ");
     scanf("%lf", &income);
 
     // Output the tax due based on input
     printf("Your tax due is: $%.2f\n", tax_due(income));
 
     return 0;
 }
 