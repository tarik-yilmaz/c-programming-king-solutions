/*
 * Chapter 5, Exercise 6 – Invalid If Statement
 * ---------------------------------------------
 * This exercise analyzes the following `if` statement:
 *
 * if (n === 1-10)
 *     printf("n is between 1 and 10\n");
 *
 * Question:
 * ----------
 * - Is this statement **legal**?
 * - What happens when `n = 5`?
 *
 * Answer:
 * -------
 * ❌ **No, this statement is not legal in C.**
 * ✅ There are **two issues**: the **invalid `===` operator** and the **incorrect arithmetic expression `1 - 10`**.
 *
 * Explanation:
 * ------------
 * 1️⃣ `===` is **not a valid operator in C**.
 *    - In C, the equality operator is `==`.
 *    - `===` is used in **JavaScript**, but **not in C**.
 *
 * 2️⃣ `1 - 10` is a **valid arithmetic expression**.
 *    - It evaluates to **-9**.
 *    - The corrected statement using `==` would be:
 *      ```c
 *      if (n == 1 - 10) // Equivalent to if (n == -9)
 *          printf("n is between 1 and 10\n");
 *      ```
 *    - This **does not check if `n` is between 1 and 10**.
 *
 * Behavior when `n = 5`:
 * ----------------------
 * - `1 - 10` evaluates to `-9`.
 * - `if (n == -9)` is false, so **nothing prints**.
 *
 * ✅ **Correct Way to Check If `n` is Between 1 and 10**
 * ------------------------------------------------------
 * Use **logical AND (`&&`)** to define a range:
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
 
     // Incorrect condition (causes syntax error in C)
     // if (n === 1-10) // ❌ INVALID IN C
 
     // Demonstrating the incorrect fixed version
     if (n == 1 - 10) // This checks if n == -9 (not what we want)
         printf("[Incorrect] n is between 1 and 10\n");
 
     // Corrected condition using range check
     if (n >= 1 && n <= 10)
         printf("[Correct] n is between 1 and 10\n");
 
     return 0; // End of program
 }
 
 /*
 // Example Runs:
 // -------------
 // Input: 5
 // Output:
 // [Correct] n is between 1 and 10 ✅ (correct behavior)
 //
 // Input: -9
 // Output:
 // [Incorrect] n is between 1 and 10 ❌ (wrong behavior)
 // (Corrected condition does not print anything for -9)
 */
 
 /*
 // Key Takeaways:
 // --------------
 // ✅ `===` is **not valid in C** (use `==` instead).
 // ✅ `1 - 10` evaluates to `-9`, which is **not** a valid range check.
 // ✅ Use **`&&` (logical AND)** for numeric range comparisons.
 */
 
 