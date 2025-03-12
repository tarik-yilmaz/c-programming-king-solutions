/*
 * Chapter 4, Exercise 11 – Understanding Post-Increment and Pre-Decrement
 * ------------------------------------------------------------------------
 * This exercise explores the effects of **post-increment (`i++`)** and 
 * **pre-decrement (`--j`)** on arithmetic operations in C.
 *
 * Example Runs:
 * -------------
 * ✅ **(a) Output:** "0 2"
 * ✅ **(b) Output:** "4 11 6"
 * ✅ **(c) Output:** "0 8 7"
 * ✅ **(d) Output:** "3 4 5 4"
 *
 * Explanation:
 * ------------
 *
 * (a) Code:
 * ---------
 *   i = 1;
 *   printf("%d", i++ - 1);
 *   printf("%d", i);
 *
 * 🔹 Breakdown:
 *   - `i++`: Post-increment. The value of `i` (1) is used **before** incrementing.
 *   - `i++ - 1`: The value is `1 - 1 = 0`. Then `i` is incremented to 2.
 *   - Second `printf` prints `i = 2`.
 *
 * ✅ **Output:** `"0 2"`
 *
 * (b) Code:
 * ---------
 *   i = 10; j = 5;
 *   printf("%d", i++ - ++j);
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `++j`: Pre-increment. `j` is incremented first, so `j = 6`.
 *   - `i++`: Post-increment. The value of `i` (10) is used **before** incrementing to 11.
 *   - `i++ - ++j`: Evaluates as `10 - 6 = 4`.
 *   - Final values: `i = 11`, `j = 6`.
 *
 * ✅ **Output:** `"4 11 6"`
 *
 * (c) Code:
 * ---------
 *   i = 7; j = 8;
 *   printf("%d", i++ - --j);
 *   printf("%d %d", i, j);
 *
 * 🔹 Breakdown:
 *   - `--j`: Pre-decrement. `j` is decremented first, so `j = 7`.
 *   - `i++`: Post-increment. The value of `i` (7) is used **before** incrementing to 8.
 *   - `i++ - --j`: Evaluates as `7 - 7 = 0`.
 *   - Final values: `i = 8`, `j = 7`.
 *
 * ✅ **Output:** `"0 8 7"`
 *
 * (d) Code:
 * ---------
 *   i = 3; j = 4; k = 5;
 *   printf("%d", i++ - j++ + --k);
 *   printf("%d %d %d", i, j, k);
 *
 * 🔹 Breakdown:
 *   - `i++`: Post-increment. The value of `i` (3) is used **before** incrementing to 4.
 *   - `j++`: Post-increment. The value of `j` (4) is used **before** incrementing to 5.
 *   - `--k`: Pre-decrement. `k` is decremented first, so `k = 4`.
 *   - `i++ - j++ + --k`: Evaluates as `3 - 4 + 4 = 3`.
 *   - Final values: `i = 4`, `j = 5`, `k = 4`.
 *
 * ✅ **Output:** `"3 4 5 4"`
 *
 * Conclusion:
 * -----------
 * ✅ This exercise highlights **how post-increment and pre-decrement affect expressions**.
 * ✅ Order of execution matters, and **operator precedence** plays a key role in evaluation.
 */
