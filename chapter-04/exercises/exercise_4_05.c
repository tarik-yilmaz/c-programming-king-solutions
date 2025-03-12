/*
 * Chapter 4, Exercise 5 – Modulus Operator in C89
 * ------------------------------------------------
 * This exercise examines how the **modulus operator (`%`)** behaves in **C89**,
 * particularly when **negative numbers** are involved.
 *
 * Key Considerations:
 * --------------------
 *  - In **C89**, the behavior of `%` with negative numbers is **implementation-dependent**:
 *    - Some compilers make the remainder **match the dividend (`a`)**.
 *    - Others make the remainder **match the divisor (`b`)**.
 *  - The modulus operator satisfies the equation:
 *    - `a = (a / b) * b + (a % b)`
 *
 * Evaluations:
 * ------------
 *  (a) `8 % 5`
 *  - Both dividend and divisor are **positive**.
 *  - `8 % 5 = 3` (remainder when `8` is divided by `5`).
 *  - **Final value:** `3`
 *
 *  (b) `-8 % 5`
 *  - Negative dividend, positive divisor.
 *  - **Compiler-dependent results:**
 *    - Some compilers: remainder **matches the dividend** → `-8 % 5 = -3`
 *    - Other compilers: remainder **matches the divisor** → `-8 % 5 = 2`
 *  - **Possible values:** `-3` or `2` (implementation-dependent).
 *
 *  (c) `8 % -5`
 *  - Positive dividend, negative divisor.
 *  - **Compiler-dependent results:**
 *    - Some compilers: remainder **matches the dividend** → `8 % -5 = 3`
 *    - Other compilers: remainder **matches the divisor** → `8 % -5 = -2`
 *  - **Possible values:** `3` or `-2` (implementation-dependent).
 *
 *  (d) `-8 % -5`
 *  - Both dividend and divisor are **negative**.
 *  - **Compiler-dependent results:**
 *    - Some compilers: remainder **matches the dividend** → `-8 % -5 = -3`
 *    - Other compilers: remainder **matches the divisor** → `-8 % -5 = 2`
 *  - **Possible values:** `-3` or `2` (implementation-dependent).
 *
 * Final Answers for C89:
 * ----------------------
 *  ✅ (a) `3`
 *  ✅ (b) `-3` or `2`
 *  ✅ (c) `3` or `-2`
 *  ✅ (d) `-3` or `2`
 */
