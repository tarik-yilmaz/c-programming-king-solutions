/*
 * Chapter 7, Exercise 12 – Conversions in the Expression d = i + f
 * ---------------------------------------------------------------
 * Suppose that i is a variable of type int, f is a variable of type float, and
 * d is a variable of type double. Explain what conversions take place during
 * the execution of the following statement:
 *
 *      d = i + f;
 *
 * Explanation:
 * ------------
 * 1. In the expression i + f:
 *    - The variable i (int) is promoted to float when combined with f (float)
 *      in an arithmetic operation.
 *    - Thus, the addition is performed as float + float, and the result is of type float.
 *
 * 2. Assignment to d:
 *    - The result of i + f (a float) is then assigned to d, which is of type double.
 *    - During this assignment, the float value is converted (promoted) to double.
 *
 * Final Conversion Steps:
 * -----------------------
 * - i (int) is promoted to float.
 * - The sum i + f is calculated as a float.
 * - The float result is then converted to double during the assignment to d.
 */
