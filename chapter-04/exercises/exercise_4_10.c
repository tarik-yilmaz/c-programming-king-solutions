/*
 * Chapter 4, Exercise 10 – Understanding Assignment Expressions in C
 * -------------------------------------------------------------------
 * This exercise analyzes different **assignment expressions** and their effects 
 * on integer variables in C.
 *
 * Example Runs:
 * -------------
 * ✅ **(a) Output:** "12 12"
 * ✅ **(b) Output:** "3 4"
 * ✅ **(c) Output:** "2 8"
 * ✅ **(d) Output:** "6 9"
 *
 * Explanation:
 * ------------
 *
 * (a) Code:
 * ---------
 *   i = 6;
 *   j = i += i;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `i += i` is equivalent to `i = i + i`: `i = 6 + 6 = 12`.
 *   - `j = i += i` assigns the updated value of `i` (12) to `j`.
 *
 * ✅ **Output:** `"12 12"`
 *
 * (b) Code:
 * ---------
 *   i = 5;
 *   j = (i -= 2) + 1;
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `i -= 2` is equivalent to `i = i - 2`: `i = 5 - 2 = 3`.
 *   - `j = (i -= 2) + 1` assigns `i` (3) + 1 to `j`: `j = 3 + 1 = 4`.
 *
 * ✅ **Output:** `"3 4"`
 *
 * (c) Code:
 * ---------
 *   i = 7;
 *   j = 6 + (i = 2.5);
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - In C, assigning a float (`2.5`) to an int (`i`) **truncates** the value, so `i = 2`.
 *   - `j = 6 + (i = 2)` calculates `6 + 2 = 8`.
 *
 * ✅ **Output:** `"2 8"`
 *
 * (d) Code:
 * ---------
 *   i = 2;
 *   j = 8;
 *   j = (i = 6) + (j = 3);
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `(i = 6)` assigns 6 to `i`.
 *   - `(j = 3)` assigns 3 to `j`.
 *   - `j = (i = 6) + (j = 3)` calculates `6 + 3 = 9` and assigns it to `j`.
 *
 * ✅ **Output:** `"6 9"`
 *
 * Conclusion:
 * -----------
 * ✅ This exercise demonstrates **how assignment expressions evaluate in C**.
 * ✅ Understanding **operator precedence** and **truncation behavior** is essential 
 *    when working with assignments inside expressions.
 */
