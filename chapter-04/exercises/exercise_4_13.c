/*
 * Chapter 4, Exercise 13 – Pre-Increment vs. Post-Increment
 * -----------------------------------------------------------
 * This exercise examines which of the expressions `++i` or `i++`
 * is exactly the same as `(i += 1)`, and why.
 *
 * Answer:
 * --------
 * ✅ The expression **`++i`** is **exactly the same as `(i += 1)`**.
 *
 * Justification:
 * --------------
 * - `(i += 1)` increments `i` by 1 and **immediately updates** its value.
 * - `++i` (pre-increment) **also increments `i` first** and returns the updated value.
 * - `i++` (post-increment), however, **returns the original value** before incrementing `i`.
 *
 * Comparison of behaviors:
 * ------------------------
 * Suppose `i = 5` before execution:
 *
 * 1️⃣ **Pre-Increment (`++i`) – Same as `(i += 1)`**
 * ```c
 * i = 5;
 * int x = ++i;  // i is incremented **before** assignment
 * ```
 * ✅ `i` becomes `6` immediately.  
 * ✅ `x` receives `6` (updated value).  
 *
 * 2️⃣ **Post-Increment (`i++`) – NOT the same as `(i += 1)`**
 * ```c
 * i = 5;
 * int x = i++;  // i is assigned **before** incrementing
 * ```
 * ❌ `x` receives `5` (original value).  
 * ✅ `i` becomes `6` **after** the assignment.
 *
 * Conclusion:
 * -----------
 * ✅ **`++i` is equivalent to `(i += 1)`, because both increment `i` first and return the updated value.**  
 * ❌ **`i++` is NOT equivalent to `(i += 1)`, since it evaluates to the original value before incrementing.**  
 */
