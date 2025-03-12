/*
 * Chapter 4, Exercise 4 – Integer Division in C99
 * ------------------------------------------------
 * This exercise analyzes how integer division behaves in **C99**, particularly 
 * when **negative numbers** are involved.
 *
 * Key Considerations:
 * --------------------
 *  - In **C99**, integer division **always truncates toward zero**.
 *  - This behavior is **consistent across all compilers**, unlike in **C89**, where it was implementation-dependent.
 *  - The **remainder (`%`)** follows this rule:
 *    - `a = (a / b) * b + (a % b)`
 *
 * Evaluations:
 * ------------
 *  (a) `s / s`
 *  - If `s != 0`, the result is **always** `1`, since any nonzero value divided by itself is `1`.
 *  - If `s == 0`, division by zero is **undefined behavior**.
 *  - **Final value:** `1` (if `s != 0`), **undefined** (if `s == 0`).
 *
 *  (b) `-8 / 5`
 *  - Integer division truncates toward zero.
 *  - `-8 / 5 = -1`
 *  - **Final value:** `-1`
 *
 *  (c) `8 / -5`
 *  - Integer division truncates toward zero.
 *  - `8 / -5 = -1`
 *  - **Final value:** `-1`
 *
 *  (d) `-8 / -5`
 *  - Integer division truncates toward zero.
 *  - `-8 / -5 = 1`
 *  - **Final value:** `1`
 *
 * Final Answers for C99:
 * ----------------------
 *  ✅ (a) `1` (if `s != 0`), **undefined** (if `s == 0`).
 *  ✅ (b) `-1`
 *  ✅ (c) `-1`
 *  ✅ (d) `1`
 */
