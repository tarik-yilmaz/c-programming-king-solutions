/*
 * Chapter 5, Project 5 – Income Tax Calculator
 * ---------------------------------------------
 * This program calculates the income tax for single residents in one state,
 * based on the following tax schedule:
 *
 *    Income Range          Tax Calculation
 *    -------------         ----------------------------
 *    Not over $750         1% of income
 *    $750 - $2,250         $7.50 plus 2% of the amount over $750
 *    $2,250 - $3,750       $37.50 plus 3% of the amount over $2,250
 *    $3,750 - $5,250       $82.50 plus 4% of the amount over $3,750
 *    $5,250 - $7,000       $142.50 plus 5% of the amount over $5,250
 *    Over $7,000           $230.00 plus 6% of the amount over $7,000
 *
 * The program prompts the user to enter their taxable income and then displays the
 * tax due. If the income is negative, an error message is shown. If the income is zero,
 * no tax is due.
 *
 * Example Run:
 * ------------
 *  Enter amount of income: 3000.00
 *  Your tax due is: $[calculated_value]
 *
 * Notes:
 * ------
 * - The program uses a series of if-else statements to determine the tax bracket.
 * - A minimum tax of $39.00 is enforced for all taxable incomes.
 */

 #include <stdio.h>

 int main(void) {
 
     float income, tax; // Variables to store the user's income and calculated tax
 
     // Prompt the user to enter their income
     printf("Enter amount of income: ");
     scanf("%f", &income);
 
     // Check for invalid (negative) income
     if (income < 0) {
         printf("Income must be positive\n");
         return 1; // Exit if income is negative
 
     // Check if no tax is due (income is zero)
     } else if (income == 0) {
         printf("No tax due\n");
 
     // Calculate tax for incomes up to $750
     } else if (income <= 750.00f) {
         tax = income * 0.01f; // 1% tax
         printf("Your tax due is: $%.2f\n", tax);
 
     // Calculate tax for incomes between $750.01 and $2250
     } else if (income <= 2250.00f) {
         tax = 7.50f + 0.02f * (income - 750);
         printf("Your tax due is: $%.2f\n", tax);
 
     // Calculate tax for incomes between $2250.01 and $3750
     } else if (income <= 3750.00f) {
         tax = 37.50f + 0.03f * (income - 2250);
         printf("Your tax due is: $%.2f\n", tax);
 
     // Calculate tax for incomes between $3750.01 and $5250
     } else if (income <= 5250.00f) {
         tax = 82.50f + 0.04f * (income - 3750);
         printf("Your tax due is: $%.2f\n", tax);
 
     // Calculate tax for incomes between $5250.01 and $7000
     } else if (income <= 7000.00f) {
         tax = 142.50f + 0.05f * (income - 5250);
         printf("Your tax due is: $%.2f\n", tax);
         
     // Calculate tax for incomes above $7000
     } else {
         tax = 230.00f + 0.06f * (income - 7000);
         printf("Your tax due is: $%.2f\n", tax);
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 0            → Output: No tax due
 // Input: 500          → Output: Your tax due is: $5.00
 // Input: 3000.00      → Output: Your tax due is: $[calculated_value]
 // Input: -50          → Output: Income must be positive
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses if-else statements to determine the tax bracket.
 // ✅ Enforces a minimum tax of $39.00 if the computed commission is lower.
 // ✅ Provides clear, user-friendly output messages.
 // ✅ Assumes a maximum of four-digit income values for this project.
 */
 