/*
 * Chapter 4, Exercise 2 – Integer Division & Negation
 * ----------------------------------------------------
 * This exercise explores whether `(-i) / j` always produces the same result
 * as `-(i / j)` when `i` and `j` are positive integers.
 *
 * Question:
 * ----------
 *  - Does `(-i) / j` always have the same value as `-(i / j)`?
 *
 * Answer:
 * -------
 *  ✅ Yes, for positive integers `i` and `j`, the two expressions always produce the same result.
 *
 * Justification:
 * --------------
 *  1. **Integer division behavior in C:**
 *     - Integer division in C **truncates towards zero** (discards the decimal part).
 *     - Example cases:
 *       - `5 / 2 = 2`
 *       - `(-5) / 2 = -2`
 *
 *  2. **Comparing `(-i) / j` vs. `-(i / j)`:**
 *     - `(-i) / j` → "Divide the negative value of `i` by `j`."
 *     - `-(i / j)` → "Negate the result of dividing `i` by `j`."
 *     - Since both expressions yield the **same** integer truncation behavior, the results are **identical**.
 *
 * Example:
 * ---------
 *  Let `i = 5`, `j = 2`:
 *  - `(-i) / j = (-5) / 2 = -2`
 *  - `-(i / j) = -(5 / 2) = -2`
 *
 * Observation:
 * ------------
 *  ✅ Both expressions result in `-2`, proving their equivalence.
 *
 * Conclusion:
 * -----------
 *  - For **positive integers** `i` and `j`, `(-i) / j` and `-(i / j)` **always** produce the same result.
 *  - This is due to **C's truncation rule**, which consistently applies to both expressions.
 */
