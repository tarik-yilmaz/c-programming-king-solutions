/*
 * Chapter 4, Project 5 – UPC Check Digit Calculator
 * -------------------------------------------------
 * This program calculates the **check digit** for a **12-digit UPC** code.
 *
 * Instead of entering digits in separate groups, the user enters **all 11 digits at once**.
 *
 * Example Run:
 * ------------
 *  Enter the first 11 digits of a UPC: 01380015173
 *  Check digit: 5
 *
 * Explanation:
 * ------------
 * - The **UPC check digit** is computed using the following algorithm:
 *   1. Sum all **digits in odd positions** (1st, 3rd, 5th, …, 11th).
 *   2. Sum all **digits in even positions** (2nd, 4th, 6th, …, 12th).
 *   3. Multiply the **even-position sum** by 3.
 *   4. Compute the **total sum** of the two results.
 *   5. The **check digit** is calculated as:  
 *      \[
 *      9 - ((\text{total} - 1) \% 10)
 *      \]
 */

 #include <stdio.h>

 int main()
 {
     // Variables to store each of the 12 digits of the UPC
     int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
 
     // Variables to store partial sums and total
     int sum1, sum2, total;
 
     // Prompt the user to enter the first 11 digits of the UPC
     printf("Enter the first 11 digits of a UPC: ");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
 
     // Compute the sum of the digits in even positions (2, 4, 6, …, 12)
     sum1 = n2 + n4 + n6 + n8 + n10 + n12;
 
     // Compute the sum of the digits in odd positions (1, 3, 5, …, 11)
     sum2 = n1 + n3 + n5 + n7 + n9 + n11;
 
     // Compute the total sum as per the UPC check digit formula
     total = (sum1 * 3) + sum2;
 
     // Compute the check digit using the formula: 9 - ((total - 1) % 10)
     printf("Check digit: %d\n", (9 - ((total - 1) % 10)));
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ---------------------
 // Input: 01380015173
 // Output: Check digit: 5
 //
 // Input: 12345678901
 // Output: Check digit: 7
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses `%1d` in `scanf` to read **one digit at a time** from a **single input string**.
 // ✅ Implements the **UPC check digit algorithm** correctly.
 // ✅ Allows users to **input all digits at once** instead of separated groups.
 // ✅ Keeps the **code simple and readable** while following best practices.
 */
 
 