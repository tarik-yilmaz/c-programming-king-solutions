/*
 * Chapter 4, Project 6 – EAN Check Digit Calculator
 * -------------------------------------------------
 * This program calculates the **check digit** for a **13-digit European Article Number (EAN)**.
 *
 * The user enters **the first 12 digits** of the EAN, and the program computes the **13th check digit**.
 *
 * Example Run:
 * ------------
 *  Enter the first 12 digits of an EAN: 869148426000
 *  Check digit: 8
 *
 * Explanation:
 * ------------
 * - The **EAN check digit** is computed using the following algorithm:
 *   1. Sum all **digits in even positions** (2nd, 4th, 6th, …, 12th).
 *   2. Sum all **digits in odd positions** (1st, 3rd, 5th, …, 11th).
 *   3. Multiply the **even-position sum** by 3.
 *   4. Compute the **total sum** of the two results.
 *   5. The **check digit** is calculated as:  
 *      \[
 *      9 - ((\text{total} - 1) \% 10)
 *      \]
 */

 #include <stdio.h>

 int main(void) {
     int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
     int first_sum, second_sum, total, check_digit;
 
     // Prompt the user to enter the first 12 digits of the EAN
     printf("Enter the first 12 digits of an EAN: ");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
           &d1, &d2, &d3, &d4, &d5, &d6, 
           &d7, &d8, &d9, &d10, &d11, &d12);
 
     // Calculate the sum of digits in even positions (2, 4, 6, …, 12)
     first_sum = d2 + d4 + d6 + d8 + d10 + d12;
 
     // Calculate the sum of digits in odd positions (1, 3, 5, …, 11)
     second_sum = d1 + d3 + d5 + d7 + d9 + d11;
 
     // Compute the total sum as per the EAN check digit formula
     total = (first_sum * 3) + second_sum;
 
     // Compute the check digit using the formula: 9 - ((total - 1) % 10)
     check_digit = 9 - ((total - 1) % 10);
 
     // Display the check digit
     printf("Check digit: %d\n", check_digit);
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ---------------------
 // Input: 869148426000
 // Output: Check digit: 8
 //
 // Input: 400638133393
 // Output: Check digit: 1
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses `%1d` in `scanf` to read **one digit at a time** from a **single input string**.
 // ✅ Implements the **EAN check digit algorithm** correctly.
 // ✅ Allows users to **input all digits at once** instead of separated groups.
 // ✅ Keeps the **code simple and readable** while following best practices.
 */
 
 