/*
 * Chapter 4, Exercise 12 – Understanding Pre-Increment and Post-Increment
 * ------------------------------------------------------------------------
 * This exercise explores how **pre-increment (`++i`)** and **post-increment (`i++`)** 
 * affect arithmetic operations in C.
 *
 * Example Runs:
 * -------------
 * ✅ **(a) Output:** "6 16"
 * ✅ **(b) Output:** "6 -7"
 * ✅ **(c) Output:** "6 23"
 * ✅ **(d) Output:** "6 15"
 *
 * Explanation:
 * ------------
 *
 * (a) Code:
 * ---------
 *   i = 5;
 *   j = ++i * 3 - 2;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `++i`: Pre-increment. `i` is incremented **before** being used, so `i = 6`.
 *   - `j = ++i * 3 - 2`: Evaluates as `j = 6 * 3 - 2 = 16`.
 *   - Final values: `i = 6`, `j = 16`.
 *
 * ✅ **Output:** `"6 16"`
 *
 * (b) Code:
 * ---------
 *   i = 5;
 *   j = 3 - 2 * i++;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `i++`: Post-increment. `i` (5) is **used first**, then incremented to 6.
 *   - `j = 3 - 2 * 5`: Evaluates as `3 - 10 = -7`.
 *   - Final values: `i = 6`, `j = -7`.
 *
 * ✅ **Output:** `"6 -7"`
 *
 * (c) Code:
 * ---------
 *   i = 7;
 *   j = 3 * i-- + 2;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `i--`: Post-decrement. `i` (7) is **used first**, then decremented to 6.
 *   - `j = 3 * 7 + 2`: Evaluates as `21 + 2 = 23`.
 *   - Final values: `i = 6`, `j = 23`.
 *
 * ✅ **Output:** `"6 23"`
 *
 * (d) Code:
 * ---------
 *   i = 7;
 *   j = 3 + --i * 2;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `--i`: Pre-decrement. `i` is decremented **before** being used, so `i = 6`.
 *   - `j = 3 + 6 * 2`: Evaluates as `3 + 12 = 15`.
 *   - Final values: `i = 6`, `j = 15`.
 *
 * ✅ **Output:** `"6 15"`
 *
 * Conclusion:
 * -----------
 * ✅ This exercise demonstrates how **pre-increment (`++i`) modifies a variable before use**,
 *    while **post-increment (`i++`) modifies it after use**.
 * ✅ **Operator precedence and evaluation order matter** when combining increment operations.
 */
