/*
 * Chapter 7, Exercise 11 – Type of Expression
 * --------------------------------------------
 * Suppose that i is a variable of type int, f is a variable of type float, and
 * d is a variable of type double. What is the type of the expression:
 *
 *      i * f / d
 *
 * Explanation:
 * ------------
 * 1. In the expression i * f:
 *    - The variable i (int) is promoted to float when combined with f (float).
 *    - Therefore, i * f results in a float.
 *
 * 2. In the expression (i * f) / d:
 *    - The float result from i * f is then used in an operation with d (double).
 *    - In such arithmetic operations, the float is promoted to double.
 *    - Thus, the final result is of type double.
 *
 * Final Answer:
 * -------------
 * The type of the expression i * f / d is double.
 */
