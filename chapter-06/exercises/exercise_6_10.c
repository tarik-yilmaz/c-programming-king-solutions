/*
 * Chapter 6, Exercise 10 – Replacing continue with goto
 * ------------------------------------------------------
 * This exercise demonstrates how to replace a `continue` statement with an
 * equivalent `goto` statement within a loop.
 *
 * Original Code using `continue`:
 * --------------------------------
 * for (i = 0; i < 10; i++) {
 *     if (i % 2 == 0)
 *         continue;  // Skip the rest of the loop body if `i` is even
 *     printf("%d ", i);  // This line runs only if `i` is odd
 * }
 *
 * Translated Code using `goto`:
 * ------------------------------
 * for (i = 0; i < 10; i++) {
 *     if (i % 2 == 0)
 *         goto skip;  // Jump to the label `skip` to skip the rest of the loop body
 *     printf("%d ", i);  // This line runs only if `i` is odd
 * skip:
 *     ;  // Empty statement for the `goto` target
 * }
 *
 * Explanation:
 * ------------
 * - The `continue` statement immediately moves to the next iteration of the loop.
 * - The `goto` statement, when used to jump to a label at the end of the loop body,
 *   achieves the same effect by skipping the remaining statements.
 * - The empty statement (`;`) after the label ensures that the syntax remains valid.
 *
 * Output:
 * -------
 * Both versions produce the same output: "1 3 5 7 9"
 */

 #include <stdio.h>

 int main(void) {
     int i;
     
     // For loop using goto to replace continue
     for (i = 0; i < 10; i++) {
         if (i % 2 == 0)
             goto skip;  // If i is even, skip printing it
         printf("%d ", i);  // This prints only when i is odd
     skip:
         ;  // Empty statement for the goto target
     }
     
     return 0;
 }
 