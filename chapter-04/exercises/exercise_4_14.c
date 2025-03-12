/*
 * Chapter 4, Exercise 14 – Operator Precedence & Parentheses
 * -----------------------------------------------------------
 * This exercise examines how a **C compiler** interprets expressions
 * based on **operator precedence** and **associativity rules**.
 *
 * Notes:
 * -------
 * - **Multiplication (`*`), division (`/`), and modulus (`%`)**
 *   have **higher precedence** than addition (`+`) and subtraction (`-`).
 * - **Unary operators (`-` and `+`)** have **higher precedence** than
 *   binary arithmetic operators.
 * - **Left-to-right associativity** applies to most binary operators.
 *
 * Expression Breakdown:
 * ----------------------
 *
 * (a) a * b - c * d + e
 * ----------------------
 * - `*` has higher precedence than `-` and `+`.
 * - `-` and `+` are evaluated **left-to-right**.
 * ✅ **Parenthesized version:**  
 *   `((a * b) - (c * d)) + e`
 *
 * (b) a / b % c / d
 * ----------------------
 * - `/` and `%` have **equal precedence** and are evaluated **left-to-right**.
 * ✅ **Parenthesized version:**  
 *   `((a / b) % c) / d`
 *
 * (c) -a - b + c - +d
 * ----------------------
 * - Unary `-` and `+` have **the highest precedence**.
 * - `-` and `+` are evaluated **left-to-right**.
 * ✅ **Parenthesized version:**  
 *   `(((-a) - b) + c) - (+d)`
 *
 * (d) a * -b / c - d
 * ----------------------
 * - Unary `-` has the **highest precedence**.
 * - `*` and `/` have the **same precedence** and are evaluated **left-to-right**.
 * - `-` is evaluated last.
 * ✅ **Parenthesized version:**  
 *   `(((a * (-b)) / c) - d)`
 *
 * Summary:
 * ---------
 * ✅ (a) `((a * b) - (c * d)) + e`
 * ✅ (b) `((a / b) % c) / d`
 * ✅ (c) `(((-a) - b) + c) - (+d)`
 * ✅ (d) `(((a * (-b)) / c) - d)`
 */
