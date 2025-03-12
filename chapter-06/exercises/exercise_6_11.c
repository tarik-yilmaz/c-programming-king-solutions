/*
 * Chapter 6, Exercise 11 – Summing Even Numbers Using continue
 * -------------------------------------------------------------
 * This program fragment calculates the sum of even numbers from 0 to 9 using a for loop
 * and the continue statement.
 *
 * Code:
 * -----
 *   sum = 0;
 *   for (i = 0; i < 10; i++) {
 *       if (i % 2)
 *           continue;
 *       sum += i;
 *   }
 *   printf("%d\n", sum);
 *
 * Explanation:
 * ------------
 * 1. Initialization:
 *    - `sum` is set to 0.
 *    - `i` starts at 0 and increments by 1 in each iteration until `i < 10`.
 *
 * 2. Loop Body:
 *    - The condition `if (i % 2)` checks if `i` is odd.
 *      - If `i` is odd (`i % 2 != 0`), the continue statement skips the addition.
 *      - If `i` is even (`i % 2 == 0`), `i` is added to `sum`.
 *
 * 3. Iteration-by-Iteration Breakdown:
 *    - i = 0: Even; sum += 0 → sum becomes 0.
 *    - i = 1: Odd; continue → sum remains 0.
 *    - i = 2: Even; sum += 2 → sum becomes 2.
 *    - i = 3: Odd; continue → sum remains 2.
 *    - i = 4: Even; sum += 4 → sum becomes 6.
 *    - i = 5: Odd; continue → sum remains 6.
 *    - i = 6: Even; sum += 6 → sum becomes 12.
 *    - i = 7: Odd; continue → sum remains 12.
 *    - i = 8: Even; sum += 8 → sum becomes 20.
 *    - i = 9: Odd; continue → sum remains 20.
 *
 * 4. After the loop:
 *    - The final value of `sum` is 20.
 *
 * Final Output:
 * -------------
 * The program prints: 20
 */

 #include <stdio.h>

 int main(void) {
     int i, sum = 0;
     
     for (i = 0; i < 10; i++) {
         if (i % 2)
             continue;
         sum += i;
     }
     
     printf("%d\n", sum);
     
     return 0;
 }
 