/*
 * Chapter 4, Exercise 1 – Modulo and Integer Division
 * ----------------------------------------------------
 * This exercise analyzes the output of different integer division
 * and modulo operations.
 *
 * Given integer variables `i`, `j`, and `k`, determine the output of:
 *
 * - **Modulo operations** (`%`): Calculates the remainder.
 * - **Integer division (`/`)**: Discards the decimal part.
 *
 * Example Evaluations:
 * --------------------
 *  (a) i = -5, j = 3 → Output: "-2 -1"
 *  (b) i = 7, j = 3 → Output: "2"
 *  (c) i = 7, j = 8, k = 9 → Output: "1"
 *  (d) i = 1, j = 2, k = 3 → Output: "0"
 *
 * Notes:
 * ------
 * - Integer division (`/`) **truncates** decimals (e.g., `5/2 = 2`).
 * - Modulo (`%`) follows the rule: `a % b` gives the remainder of `a/b`.
 */

 /*
  * (a) Code:
  * ---------
  * i = -5;
  * j = 3;
  * printf("%d %d", i % j, i / j);
  *
  * Explanation:
  * - `i % j = -5 % 3 = -2` (remainder when -5 is divided by 3).
  * - `i / j = -5 / 3 = -1` (integer division, discarding the decimal part).
  * Output: `-2 -1`
  */

 /*
  * (b) Code:
  * ---------
  * i = 7;
  * j = 3;
  * printf("%d", (i + 10) % j);
  *
  * Explanation:
  * - `i + 10 = 7 + 10 = 17`
  * - `17 % j = 17 % 3 = 2` (remainder when 17 is divided by 3).
  * Output: `2`
  */

 /*
  * (c) Code:
  * ---------
  * i = 7;
  * j = 8;
  * k = 9;
  * printf("%d", (i + 10) % k / j);
  *
  * Explanation:
  * - `i + 10 = 7 + 10 = 17`
  * - `17 % k = 17 % 9 = 8`
  * - `8 / j = 8 / 8 = 1` (integer division).
  * Output: `1`
  */

 /*
  * (d) Code:
  * ---------
  * i = 1;
  * j = 2;
  * k = 3;
  * printf("%d", (i + 5) % (j + 2) / k);
  *
  * Explanation:
  * - `i + 5 = 1 + 5 = 6`
  * - `j + 2 = 2 + 2 = 4`
  * - `(i + 5) % (j + 2) = 6 % 4 = 2`
  * - `2 / k = 2 / 3 = 0` (integer division).
  * Output: `0`
  */

 /*
  * Final Outputs:
  * --------------
  * (a) Output: "-2 -1"
  * (b) Output: "2"
  * (c) Output: "1"
  * (d) Output: "0"
  */
