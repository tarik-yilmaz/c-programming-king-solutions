/*
 * Chapter 6, Exercise 13 – Rewriting Loop with an Empty Body
 * -----------------------------------------------------------
 * This exercise requires rewriting the given loop so that its body is empty.
 *
 * Original Code:
 * --------------
 * for (n = 0; m > 0; n++)
 *     m /= 2;
 *
 * Modified Code:
 * --------------
 * for (n = 0; m > 0; n++, m /= 2)
 *     ; // Empty statement as the loop body
 *
 * Explanation:
 * ------------
 * - The initialization (n = 0) remains the same.
 * - The loop condition (m > 0) is unchanged.
 * - Both the increment (n++) and the update (m /= 2) are now in the update section of the for loop.
 * - The loop body is replaced by an empty statement (a semicolon), which is syntactically valid.
 * - This modification does not alter the behavior of the loop.
 *
 * Example:
 * --------
 * If m is initially 8:
 *   - Iteration 1: n = 0, m = 8; then m becomes 8/2 = 4 and n increments to 1.
 *   - Iteration 2: n = 1, m = 4; then m becomes 4/2 = 2 and n increments to 2.
 *   - Iteration 3: n = 2, m = 2; then m becomes 2/2 = 1 and n increments to 3.
 *   - Iteration 4: n = 3, m = 1; then m becomes 1/2 = 0 (integer division) and n increments to 4.
 * The loop terminates when m becomes 0.
 *
 * Output:
 * -------
 * The behavior of the modified loop is identical to the original loop.
 */

 #include <stdio.h>

 int main(void) {
     int n, m = 8; // Example: m is initialized to 8
 
     // Rewritten for loop with an empty body
     for (n = 0; m > 0; n++, m /= 2)
         ;  // Empty statement as the loop body
 
     // For demonstration purposes, print the number of iterations (n)
     printf("Number of iterations: %d\n", n);
 
     return 0; // End of program
 }
 