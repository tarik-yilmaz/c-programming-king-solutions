/*
 * Chapter 6, Exercise 6 – For Loop Translation
 * ---------------------------------------------
 * This exercise translates the following while loop:
 *
 *   i = 1;
 *   while (i <= 128) {
 *       printf("%d", i);
 *       i *= 2;
 *   }
 *
 * into a single, concise for loop.
 *
 * Translated Code:
 * ----------------
 *   for (i = 1; i <= 128; i *= 2) {
 *       printf("%d", i);
 *   }
 *
 * Explanation:
 * ------------
 * - **Initialization:** `i = 1` sets the starting value.
 * - **Condition:** `i <= 128` ensures the loop continues as long as i is less than or equal to 128.
 * - **Update:** `i *= 2` doubles i after each iteration.
 * - The for loop combines initialization, condition, and update in a single statement,
 *   making the code more concise while producing the same output.
 *
 * Output:
 * -------
 * The output is: 1248163264128 (numbers printed consecutively without spaces or newlines).
 */

 #include <stdio.h>

 int main(void) {
     int i; // Loop variable
 
     // For loop that prints i and doubles it until i exceeds 128
     for (i = 1; i <= 128; i *= 2) {
         printf("%d", i);
     }
 
     return 0; // End of program
 }
 