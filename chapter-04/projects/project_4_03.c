/*
 * Chapter 4, Project 3 – Reverse a Three-Digit Number (Without Arithmetic)
 * -------------------------------------------------------------------------
 * This program reads a **three-digit number** from user input,
 * extracts each digit **without arithmetic**, and prints the reversal.
 *
 * Example Run:
 * ------------
 *  Enter a three-digit number: 123
 *  Reversal: 321
 *
 * Explanation:
 * ------------
 * - Instead of using arithmetic (`%` and `/`), we use `scanf("%1d%1d%1d")`.
 * - This allows **direct digit extraction** without calculations.
 * - The digits are then **printed in reverse order**.
 */

 #include <stdio.h>

 int main(void) {
     int d1, d2, d3; // Variables to store each digit of the three-digit number
 
     // Prompt the user to enter a three-digit number
     printf("Enter a three-digit number: ");
     
     // Use `%1d` in `scanf` to read each digit separately
     scanf("%1d%1d%1d", &d1, &d2, &d3);
 
     // Print the digits in reverse order
     printf("Reversal: %d%d%d\n", d3, d2, d1);
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ---------------------
 // Input: 123
 // Output: Reversal: 321
 //
 // Input: 405
 // Output: Reversal: 504
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses `%1d` to extract digits directly from input (avoiding arithmetic).
 // ✅ Matches `upc.c` technique from Section 4.1.
 // ✅ More efficient for character-based input processing.
 // ✅ Ensures consistent behavior for three-digit numbers.
 */
 
 