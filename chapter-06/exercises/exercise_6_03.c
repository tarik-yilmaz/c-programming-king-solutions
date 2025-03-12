/*
 * Chapter 6, Exercise 3 – For Loop with Comma Operator
 * -----------------------------------------------------
 * This exercise examines the output of a for loop that uses the comma operator
 * in its condition and update expressions.
 *
 * Code:
 * -----
 * for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
 *     printf("%d", i);
 *
 * Explanation:
 * ------------
 * - **Initialization:**  
 *   - i is set to 5, and j is set to i - 1, so j = 4.
 *
 * - **Loop Condition:**  
 *   - The condition uses the comma operator: (i > 0, j > 0).  
 *   - The comma operator evaluates i > 0 (ignored) and then j > 0 (determines loop continuation).  
 *   - The loop continues as long as j > 0 is true.
 *
 * - **Update Expressions:**  
 *   - In each iteration, i is decremented (--i) and then j is updated to (i - 1).
 *
 * Iteration Breakdown:
 * ---------------------
 * 1. i = 5, j = 4 → Condition (j > 0) is true → Print "5" → Update: i becomes 4, j becomes 3.
 * 2. i = 4, j = 3 → Condition (j > 0) is true → Print "4" → Update: i becomes 3, j becomes 2.
 * 3. i = 3, j = 2 → Condition (j > 0) is true → Print "3" → Update: i becomes 2, j becomes 1.
 * 4. i = 2, j = 1 → Condition (j > 0) is true → Print "2" → Update: i becomes 1, j becomes 0.
 * 5. i = 1, j = 0 → Condition (j > 0) is false → Loop terminates.
 *
 * Final Output:
 * -------------
 * The program prints: 5432
 *
 * Note:
 * -----
 * - The loop stops before printing "1" because the condition j > 0 fails.
 * - The values are printed consecutively without spaces or newlines.
 */

 #include <stdio.h>

 int main(void) {
     int i, j;
     for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
         printf("%d", i);
     }
     return 0;
 }
 