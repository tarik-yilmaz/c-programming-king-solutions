/*
 * Chapter 4, Exercise 9 – Understanding Compound Assignment Operators
 * -------------------------------------------------------------------
 * This exercise examines **how compound assignment operators** work in C.
 * The output of each fragment is analyzed step-by-step.
 *
 * Example Runs:
 * -------------
 * ✅ **(a) Output:** "63 8"
 * ✅ **(b) Output:** "3 2 1"
 * ✅ **(c) Output:** "2 -1 3"
 * ✅ **(d) Output:** "0 0 0"
 *
 * Explanation:
 * ------------
 *
 * (a) Code:
 * ---------
 *   i = 7;
 *   j = 8;
 *   i *= j + 1;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `j + 1` evaluates to `8 + 1 = 9`.
 *   - `i *= j + 1` is equivalent to `i = i * (j + 1)`.
 *   - `i = 7 * 9 = 63`.
 *   - `j` remains `8`.
 *
 * ✅ **Output:** `"63 8"`
 *
 * (b) Code:
 * ---------
 *   i = j = k = 1;
 *   i += j += k;
 *   printf("%d %d %d", i, j, k);
 *
 * 🔹 Breakdown:
 *   - `k = 1`, `j = 1`, `i = 1`.
 *   - `j += k` → `j = j + k = 1 + 1 = 2`.
 *   - `i += j` → `i = i + j = 1 + 2 = 3`.
 *
 * ✅ **Output:** `"3 2 1"`
 *
 * (c) Code:
 * ---------
 *   i = 1;
 *   j = 2;
 *   k = 3;
 *   i -= j -= k;
 *   printf("%d %d %d", i, j, k);
 *
 * 🔹 Breakdown:
 *   - `k = 3`, `j = 2`, `i = 1`.
 *   - `j -= k` → `j = j - k = 2 - 3 = -1`.
 *   - `i -= j` → `i = i - j = 1 - (-1) = 2`.
 *
 * ✅ **Output:** `"2 -1 3"`
 *
 * (d) Code:
 * ---------
 *   i = 2;
 *   j = 1;
 *   k = 0;
 *   i *= j *= k;
 *   printf("%d %d %d", i, j, k);
 *
 * 🔹 Breakdown:
 *   - `k = 0`, `j *= k` → `j = j * k = 1 * 0 = 0`.
 *   - `i *= j` → `i = i * j = 2 * 0 = 0`.
 *
 * ✅ **Output:** `"0 0 0"`
 *
 * Conclusion:
 * -----------
 * ✅ This exercise demonstrates **how compound assignment operators** work in C.
 * ✅ Understanding **operator precedence** is essential when using these expressions.
 */
