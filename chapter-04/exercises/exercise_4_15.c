/*
 * Chapter 4, Exercise 15 – Expression Statements
 * -----------------------------------------------
 * This exercise evaluates various expression statements and their effects
 * on integer variables `i` and `j`.
 *
 * Assumptions:
 * -------------
 * - `i = 1` (initial value)
 * - `j = 2` (initial value)
 *
 * Expression Evaluations:
 * ------------------------
 *
 * (a) i += j;
 * --------------
 * - Equivalent to: `i = i + j`
 * - Initial values: `i = 1`, `j = 2`
 * - After execution: `i = 1 + 2 = 3`
 * ✅ Final values: **i = 3, j = 2**
 *
 * (b) i--;
 * --------------
 * - `i--` (post-decrement) decreases `i` by 1.
 * - Initial value: `i = 3` (from step a)
 * - After execution: `i = 3 - 1 = 2`
 * ✅ Final values: **i = 2, j = 2**
 *
 * (c) i * j / i;
 * --------------
 * - Standalone expression **does not modify `i` or `j`**.
 * - Evaluates to: `(2 * 2) / 2 = 4 / 2 = 2`, but result is **not stored**.
 * ✅ Final values: **i = 2, j = 2**
 *
 * (d) i % ++j;
 * --------------
 * - `++j` (pre-increment) increases `j` **before use**.
 * - Initial `j = 2`, so `++j` makes `j = 3`.
 * - Evaluates to: `i % j` → `2 % 3 = 2`, but result is **not stored**.
 * ✅ Final values: **i = 2, j = 3**
 *
 * Summary of Final Values:
 * -------------------------
 * ✅ (a) `i = 3, j = 2`
 * ✅ (b) `i = 2, j = 2`
 * ✅ (c) `i = 2, j = 2`
 * ✅ (d) `i = 2, j = 3`
 */
