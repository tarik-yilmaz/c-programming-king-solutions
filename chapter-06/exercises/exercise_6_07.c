/*
 * Chapter 6, Exercise 7 – For Loop Translation of a Do-While Loop
 * ---------------------------------------------------------------
 * This exercise translates the following do-while loop:
 *
 *     i = 9384;
 *     do {
 *         printf("%d", i);
 *         i /= 10;
 *     } while (i > 0);
 *
 * into a single, concise for loop.
 *
 * Translated Code:
 * ----------------
 *     for (i = 9384; i > 0; i /= 10) {
 *         printf("%d", i);
 *     }
 *
 * Explanation:
 * ------------
 * - **Initialization:** i is set to 9384.
 * - **Condition:** The loop continues as long as i > 0.
 * - **Update:** In each iteration, i is divided by 10.
 * - This for loop combines the initialization, condition, and update in one statement,
 *   replicating the functionality of the original do-while loop.
 *
 * Output:
 * -------
 * The program prints: 93849393
 * (The numbers are printed consecutively without spaces or newlines.)
 */

 #include <stdio.h>

 int main(void) {
     int i; // Loop variable
 
     // For loop that prints i and divides it by 10 until i becomes 0
     for (i = 9384; i > 0; i /= 10) {
         printf("%d", i);
     }
 
     return 0;
 }
 