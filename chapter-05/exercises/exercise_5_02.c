/*
 * Chapter 5, Exercise 2 – Logical Operators
 * -----------------------------------------
 * This program analyzes **logical (`!`, `&&`, `||`)** operators.
 *
 * Example Runs:
 * -------------
 *  - (a) Output: "1"
 *  - (b) Output: "1"
 *  - (c) Output: "1"
 *  - (d) Output: "1"
 *
 * Explanation:
 * ------------
 * - Logical NOT (`!`): Converts **true to false (0)** and **false to true (1)**.
 * - Logical AND (`&&`): **True if both operands are true**.
 * - Logical OR (`||`): **True if at least one operand is true**.
 */

 #include <stdio.h>

 int main(void) {
     int i, j, k;
 
     // (a) Code:
     i = 10;
     j = 5;
     printf("(a) Output: %d\n", !i < j);
 
     /*
      * Explanation:
      * - `!i`: Logical NOT operator. `i = 10` (true), so `!i = 0` (false).
      * - `!i < j`: Evaluates `0 < 5`, which is **true (1)**.
      * - Final result: **1**.
      */
 
     // (b) Code:
     i = 2;
     j = 1;
     printf("(b) Output: %d\n", !!i + !j);
 
     /*
      * Explanation:
      * - `!!i`: Double logical NOT. `i = 2` (true), `!i = 0`, `!!i = 1` (true).
      * - `!j`: Logical NOT. `j = 1` (true), `!j = 0` (false).
      * - `!!i + !j`: 1 + 0 = **1**.
      * - Final result: **1**.
      */
 
     // (c) Code:
     i = 5;
     j = 0;
     k = -5;
     printf("(c) Output: %d\n", i && j || k);
 
     /*
      * Explanation:
      * - `i && j`: Logical AND. `i = 5` (true), `j = 0` (false). AND evaluates to **0** (false).
      * - `0 || k`: Logical OR. `k = -5` (true). OR evaluates to **1** (true).
      * - Final result: **1**.
      */
 
     // (d) Code:
     i = 1;
     j = 2;
     k = 3;
     printf("(d) Output: %d\n", i < j || k);
 
     /*
      * Explanation:
      * - `i < j`: 1 < 2 is **true (1)**.
      * - Logical OR (`||`) **short-circuits**. Since `i < j` is true, `k` is **not evaluated**.
      * - Final result: **1**.
      */
 
     return 0; // End of program
 }
 
 /*
 // Final Outputs:
 // --------------
 // (a) Output: "1"
 // (b) Output: "1"
 // (c) Output: "1"
 // (d) Output: "1"
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Logical NOT (`!`) flips **true ↔ false**.
 // ✅ Logical AND (`&&`) returns **1 if both true, else 0**.
 // ✅ Logical OR (`||`) **short-circuits** when the first operand is true.
 */
 
 