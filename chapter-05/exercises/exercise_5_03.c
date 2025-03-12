/*
 * Chapter 5, Exercise 3 – Short-Circuit Behavior of Logical Expressions
 * ---------------------------------------------------------------------
 * This program demonstrates **short-circuiting** in logical expressions.
 *
 * Example Runs:
 * -------------
 *  - (a) Output: "1 3 4 5"
 *  - (b) Output: "0 7 8 9"
 *  - (c) Output: "1 8 8 9"
 *  - (d) Output: "1 2 1 1"
 *
 * Explanation:
 * ------------
 * - `||` (OR) **short-circuits** if the first operand is **true**.
 * - `&&` (AND) **short-circuits** if the first operand is **false**.
 */

 #include <stdio.h>

 int main(void) {
     int i, j, k;
 
     // (a) Code:
     i = 3;
     j = 4;
     k = 5;
     printf("(a) Output: %d ", i < j || ++j < k);
     printf("%d %d %d\n", i, j, k);
 
     /*
      * Explanation:
      * - `i < j`: 3 < 4 is **true (1)**.
      * - `||` (OR) short-circuits, so `++j < k` is **not evaluated**.
      * - `j` remains **4**, `k` remains **5**.
      * - Final output: **"1 3 4 5"**.
      */
 
     // (b) Code:
     i = 7;
     j = 8;
     k = 9;
     printf("(b) Output: %d ", i - 7 && j++ < k);
     printf("%d %d %d\n", i, j, k);
 
     /*
      * Explanation:
      * - `i - 7`: 7 - 7 is **0 (false)**.
      * - `&&` (AND) short-circuits, so `j++ < k` is **not evaluated**.
      * - `j` remains **8**, `k` remains **9**.
      * - Final output: **"0 7 8 9"**.
      */
 
     // (c) Code:
     i = 7;
     j = 8;
     k = 9;
     printf("(c) Output: %d ", (i = j) || (j = k));
     printf("%d %d %d\n", i, j, k);
 
     /*
      * Explanation:
      * - `(i = j)`: Assigns `j` (8) to `i`, evaluates to **true (1)**.
      * - `||` (OR) short-circuits, so `(j = k)` is **not evaluated**.
      * - `j` remains **8**, `k` remains **9**.
      * - Final output: **"1 8 8 9"**.
      */
 
     // (d) Code:
     i = 1;
     j = 1;
     k = 1;
     printf("(d) Output: %d ", ++i || ++j && ++k);
     printf("%d %d %d\n", i, j, k);
 
     /*
      * Explanation:
      * - `++i`: Pre-increments `i` to **2**, evaluates to **true (1)**.
      * - `||` (OR) short-circuits, so `++j && ++k` is **not evaluated**.
      * - `j` and `k` remain **1**.
      * - Final output: **"1 2 1 1"**.
      */
 
     return 0; // End of program
 }
 
 /*
 // Final Outputs:
 // --------------
 // (a) Output: "1 3 4 5"
 // (b) Output: "0 7 8 9"
 // (c) Output: "1 8 8 9"
 // (d) Output: "1 2 1 1"
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ `||` (OR) short-circuits if the first operand is **true**.
 // ✅ `&&` (AND) short-circuits if the first operand is **false**.
 // ✅ Short-circuiting **prevents unnecessary evaluations**.
 */
 
 