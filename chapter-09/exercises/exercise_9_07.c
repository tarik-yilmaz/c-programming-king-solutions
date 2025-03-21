/*
 * Chapter 9, Exercise 7 – Validity of Function Calls
 * --------------------------------------------------
 * Suppose that the function `f` has the following definition:
 * 
 * int f(int a, int b) {...}
 *
 * Which of the following function calls are **legal**? Assume that `i` is of type `int`
 * and `x` is of type `double`.
 *
 * Evaluation of Statements:
 * -------------------------
 * (a) `i = f(83, 12);`    ✅ Legal
 *       - `f(83, 12)` returns an `int`, which can be assigned to `i` (type `int`).
 *
 * (b) `x = f(83, 12);`    ✅ Legal (implicit conversion)
 *       - `f(83, 12)` returns an `int`, which is assigned to `x` (type `double`).
 *       - Implicit conversion from `int` to `double` occurs.
 *
 * (c) `i = f(3.15, 9.28);` ⚠️ Legal (but implicit conversion)
 *       - `f` expects `int` arguments, but `3.15` and `9.28` are `double`.
 *       - **C truncates floating-point numbers to integers**, so `3.15 → 3`, `9.28 → 9`.
 *
 * (d) `x = f(3.15, 9.28);` ⚠️ Legal (but implicit truncation and conversion)
 *       - The arguments are truncated to `int`, and the return value (also `int`) is 
 *         converted back to `double`.
 *       - **Double conversion:** `double → int → double`.
 *
 * (e) `f(83, 12);` ❌ Illegal (no effect)
 *       - Calling a function without using its return value causes a warning or error
 *         in strict C compilers.
 *
 * Conclusion:
 * -----------
 * - **(a), (b), (c), (d) are valid but may involve implicit conversions.**
 * - **(e) is invalid because the return value is ignored.**
 *
 */
