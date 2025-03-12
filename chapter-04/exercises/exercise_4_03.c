/*
 * Chapter 4, Exercise 3 – Integer Division in C89
 * ------------------------------------------------
 * This exercise examines how integer division behaves in **C89**, particularly 
 * when **negative numbers** are involved.
 *
 * Key Considerations:
 * --------------------
 *  - In **modern C standards**, integer division truncates **toward zero**.
 *  - In **C89**, division involving negative numbers **depends on the compiler**:
 *    - Some compilers truncate **toward zero** (like C99 and later).
 *    - Others truncate **toward negative infinity**.
 *  - The **remainder (`%`)** follows this rule:
 *    - `a = (a / b) * b + (a % b)`
 *
 * Evaluations:
 * ------------
 *  (a) `s / s`
 *  - If `s != 0`, the result is **always** `1`, since any nonzero value divided by itself is `1`.
 *  - If `s == 0`, division by zero is **undefined behavior**.
 *  - **Possible values:** `1` (if `s != 0`), **undefined** (if `s == 0`).
 *
 *  (b) `-8 / 5`
 *  - Compiler-dependent:
 *    - **Truncate toward zero:** `-8 / 5 = -1`
 *    - **Truncate toward negative infinity:** `-8 / 5 = -2`
 *  - **Possible values:** `-1` or `-2` (implementation-dependent).
 *
 *  (c) `8 / -5`
 *  - Similar to (b), the result depends on truncation rules:
 *    - **Truncate toward zero:** `8 / -5 = -1`
 *    - **Truncate toward negative infinity:** `8 / -5 = -2`
 *  - **Possible values:** `-1` or `-2` (implementation-dependent).
 *
 *  (d) `-8 / -5`
 *  - Again, implementation-dependent:
 *    - **Truncate toward zero:** `-8 / -5 = 1`
 *    - **Truncate toward negative infinity:** `-8 / -5 = 2`
 *  - **Possible values:** `1` or `2` (implementation-dependent).
 *
 * Final Answers:
 * --------------
 *  ✅ (a) `1` (if `s != 0`), **undefined** (if `s == 0`).
 *  ✅ (b) `-1` or `-2`.
 *  ✅ (c) `-1` or `-2`.
 *  ✅ (d) `1` or `2`.
 */
