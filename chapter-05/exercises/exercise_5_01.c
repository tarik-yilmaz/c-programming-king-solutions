/*
 * Chapter 5, Exercise 1 – Relational and Equality Operators
 * ---------------------------------------------------------
 * This program analyzes **relational (`<`, `>`)** and **equality (`==`)** operators.
 *
 * Example Runs:
 * -------------
 *  - (a) Output: "1"
 *  - (b) Output: "1"
 *  - (c) Output: "1"
 *  - (d) Output: "0"
 *
 * Explanation:
 * ------------
 * - Relational operators compare values and return **1 (true) or 0 (false)**.
 * - Operator precedence affects how expressions are evaluated.
 */

 #include <stdio.h>

 int main(void) {
     int i, j, k;
 
     // (a) Code:
     i = 2;
     j = 3;
     k = i * j == 6;
     printf("(a) Output: %d\n", k);
 
     /*
      * Explanation:
      * - `i * j` is evaluated first: 2 * 3 = 6.
      * - `6 == 6` evaluates to **true (1)**.
      * - `k` is assigned the value **1**.
      */
 
     // (b) Code:
     i = 5;
     j = 10;
     k = 1;
     printf("(b) Output: %d\n", k > i < j);
 
     /*
      * Explanation:
      * - Operators are evaluated **left-to-right** due to their precedence.
      * - `k > i`: 1 > 5 is **false (0)**.
      * - `0 < j`: 0 < 10 is **true (1)**.
      * - Final result: **1**.
      */
 
     // (c) Code:
     i = 3;
     j = 2;
     k = 1;
     printf("(c) Output: %d\n", i < j == j < k);
 
     /*
      * Explanation:
      * - Relational operators (`<`) are evaluated **first**, left-to-right.
      * - `i < j`: 3 < 2 is **false (0)**.
      * - `j < k`: 2 < 1 is **false (0)**.
      * - Equality check: `0 == 0` is **true (1)**.
      * - Final result: **1**.
      */
 
     // (d) Code:
     i = 3;
     j = 4;
     k = 5;
     printf("(d) Output: %d\n", i % j + i < k);
 
     /*
      * Explanation:
      * - Modulus (`%`) has higher precedence than `+` and `<`.
      * - `i % j`: 3 % 4 = **3** (remainder of 3 ÷ 4).
      * - `i % j + i`: 3 + 3 = **6**.
      * - `6 < k`: 6 < 5 is **false (0)**.
      * - Final result: **0**.
      */
 
     return 0; // End of program
 }
 
 /*
 // Final Outputs:
 // --------------
 // (a) Output: "1"
 // (b) Output: "1"
 // (c) Output: "1"
 // (d) Output: "0"
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Relational operators (`<`, `>`) return **1 (true) or 0 (false)**.
 // ✅ **Operator precedence** impacts evaluation order.
 // ✅ **Left-to-right evaluation** is crucial in complex expressions.
 */
 
 