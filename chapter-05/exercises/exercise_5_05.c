/*
 * Chapter 5, Exercise 5 – Logical Mistake in `if` Statement
 * ---------------------------------------------------------
 * This exercise analyzes the behavior of the following `if` statement:
 *
 * if (n >= 1 <= 10)
 *     printf("n is between 1 and 10\n");
 *
 * Question:
 * ----------
 * - Is this statement **legal**?
 * - What happens when `n = 0`?
 *
 * Answer:
 * -------
 * ✅ The statement is **legal**, but it does **not behave correctly**.
 * ❌ It **does not** check if `n` is between 1 and 10.
 *
 * Explanation:
 * ------------
 * - The condition `n >= 1 <= 10` is evaluated **from left to right**.
 * - The **first comparison**: `n >= 1`
 *   - If `n >= 1` is true, it evaluates to `1`.
 *   - If `n >= 1` is false, it evaluates to `0`.
 * - The **second comparison**: `result <= 10`
 *   - Since `result` is either `0` or `1`, it is always `<= 10` (true).
 * - The condition **always evaluates to true**, so `"n is between 1 and 10"` is always printed.
 *
 * Incorrect Behavior Example:
 * ---------------------------
 *  - `n = 0`: 
 *    - `0 >= 1` is `false (0)`.
 *    - `0 <= 10` is `true (1)`, so the condition is **true**.
 *    - **Incorrectly prints** `"n is between 1 and 10"`.
 *
 * Corrected Condition:
 * --------------------
 * To properly check if `n` is between 1 and 10, use:
 *
 * ```c
 * if (n >= 1 && n <= 10)
 *     printf("n is between 1 and 10\n");
 * ```
 */

 #include <stdio.h>

 int main(void) {
     int n; // Variable for user input
 
     // Prompt user for input
     printf("Enter a number: ");
     scanf("%d", &n);
 
     // Incorrect condition (always evaluates to true)
     if (n >= 1 <= 10)
         printf("[Incorrect] n is between 1 and 10\n");
 
     // Corrected condition
     if (n >= 1 && n <= 10)
         printf("[Correct] n is between 1 and 10\n");
 
     return 0; // End of program
 }
 
 /*
 // Example Runs:
 // -------------
 // Input: 0
 // Output:
 // [Incorrect] n is between 1 and 10  ❌ (wrong behavior)
 // (Corrected condition does not print anything)
 
 // Input: 5
 // Output:
 // [Incorrect] n is between 1 and 10  ❌
 // [Correct] n is between 1 and 10 ✅ (correct behavior)
 */
 
 /*
 // Key Takeaways:
 // --------------
 // ✅ The statement is **syntactically legal** but **logically incorrect**.
 // ✅ The issue is **operator precedence** and implicit type conversion.
 // ✅ Use **`&&` (logical AND)** to correctly check numeric ranges.
 */
 
 