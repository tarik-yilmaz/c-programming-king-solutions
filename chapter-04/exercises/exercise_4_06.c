/*
 * Chapter 4, Exercise 6 – Modulus Operator in C99
 * ------------------------------------------------
 * This exercise examines how the **modulus operator (`%`)** behaves in **C99**,
 * particularly when **negative numbers** are involved.
 *
 * Key Considerations:
 * --------------------
 *  - In **C99**, the behavior of `%` is **well-defined**:
 *    - The **sign of the remainder always matches the dividend (`a`)**.
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
 *  - **In C99, remainder matches the dividend's sign**:
 *    - `-8 % 5 = -3`
 *  - **Final value:** `-3`
 *
 *  (c) `8 % -5`
 *  - Positive dividend, negative divisor.
 *  - **In C99, remainder matches the dividend's sign**:
 *    - `8 % -5 = 3`
 *  - **Final value:** `3`
 *
 *  (d) `-8 % -5`
 *  - Both dividend and divisor are **negative**.
 *  - **In C99, remainder matches the dividend's sign**:
 *    - `-8 % -5 = -3`
 *  - **Final value:** `-3`
 *
 * Final Answers for C99:
 * ----------------------
 *  ✅ (a) `3`
 *  ✅ (b) `-3`
 *  ✅ (c) `3`
 *  ✅ (d) `-3`
 */
