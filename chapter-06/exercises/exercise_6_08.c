/*
 * Chapter 6, Exercise 8 – Mixed Increment and Division in a for Loop
 * -------------------------------------------------------------------
 * This exercise analyzes the output of the following for loop:
 *
 *   for (i = 10; i >= 1; i /= 2)
 *       printf("%d", i++);
 *
 * Process:
 * --------
 * - **Initialization:** i is set to 10.
 * - **Condition:** The loop runs as long as i >= 1.
 * - **Loop Body:** 
 *     - The expression printf("%d", i++) prints the current value of i,
 *       then increments i (post-increment).
 * - **Update:** After executing the loop body, i is divided by 2 (i /= 2) using integer division.
 *
 * Iteration Breakdown:
 * --------------------
 * 1. **First iteration:**
 *    - i = 10.
 *    - printf("%d", i++) prints 10, then i becomes 11.
 *    - Update: i /= 2 sets i to 11 / 2 = 5.
 *
 * 2. **Second iteration:**
 *    - i = 5.
 *    - printf("%d", i++) prints 5, then i becomes 6.
 *    - Update: i /= 2 sets i to 6 / 2 = 3.
 *
 * 3. **Third iteration:**
 *    - i = 3.
 *    - printf("%d", i++) prints 3, then i becomes 4.
 *    - Update: i /= 2 sets i to 4 / 2 = 2.
 *
 * 4. **Fourth iteration:**
 *    - i = 2.
 *    - printf("%d", i++) prints 2, then i becomes 3.
 *    - Update: i /= 2 sets i to 3 / 2 = 1.
 *
 * 5. **Fifth iteration:**
 *    - i = 1.
 *    - printf("%d", i++) prints 1, then i becomes 2.
 *    - Update: i /= 2 sets i to 2 / 2 = 1.
 *
 * 6. **Sixth iteration:**
 *    - i = 1 (again).
 *    - The loop body would execute, but after printing, i is updated to 1 / 2 = 0,
 *      which fails the loop condition (i >= 1).
 *
 * Final Output:
 * -------------
 * The program prints: "105321"
 *
 * Note:
 * -----
 * - The numbers are printed consecutively without any spaces or newlines.
 */

 #include <stdio.h>

 int main(void) {
     int i;
     for (i = 10; i >= 1; i /= 2)
         printf("%d", i++);
     return 0;
 }
 