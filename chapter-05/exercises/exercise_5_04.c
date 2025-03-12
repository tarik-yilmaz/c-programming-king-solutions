/*
 * Chapter 5, Exercise 4 – Compare Two Integers
 * --------------------------------------------
 * This expression evaluates to:
 *  - `-1` if `i < j`
 *  -  `0` if `i == j`
 *  -  `1` if `i > j`
 *
 * Expression:
 * -----------
 *   (i < j ? -1 : (i > j ? 1 : 0))
 *
 * Explanation:
 * ------------
 * - Uses the **ternary (conditional) operator** to compare `i` and `j` in a **single expression**.
 * - **First condition:** `i < j` → If true, result is `-1`.
 * - **Second condition:** If `i < j` is false, check `i > j`:
 *   - If true, result is `1`.
 *   - Otherwise, result is `0` (meaning `i == j`).
 *
 * Example Evaluations:
 * --------------------
 *  - `i = 3, j = 5`  → `-1` (since `i < j`)
 *  - `i = 5, j = 5`  →  `0` (since `i == j`)
 *  - `i = 7, j = 5`  →  `1` (since `i > j`)
 */

 #include <stdio.h>

 int main(void) {
     int i, j; // Variables for input
 
     // Prompt user for two integers
     printf("Enter two integers: ");
     scanf("%d %d", &i, &j);
 
     // Compute and display the result using the ternary expression
     printf("Result: %d\n", (i < j ? -1 : (i > j ? 1 : 0)));
 
     return 0; // End of program
 }
 
 /*
 // Example Runs:
 // -------------
 // Input: 3 5   → Output: "Result: -1"
 // Input: 5 5   → Output: "Result: 0"
 // Input: 7 5   → Output: "Result: 1"
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses a **single expression** for comparison.
 // ✅ Avoids explicit `if-else` statements.
 // ✅ Efficient and **concise** solution.
 */
 
 