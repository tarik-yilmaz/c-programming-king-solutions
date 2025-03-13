/*
 * Chapter 7, Exercise 10 – Type of Expression
 * --------------------------------------------
 * Suppose that i is of type int, j is of type long, and k is of type unsigned int.
 * What is the type of the expression:
 *
 *      i + (int) j * k
 *
 * Explanation:
 * ------------
 * 1. (int) j:
 *    - The variable j is explicitly cast to type int.
 *    - This cast truncates any higher-order bits if j exceeds the range of int.
 *
 * 2. (int) j * k:
 *    - The multiplication involves an int (from the cast) and an unsigned int (k).
 *    - According to C's usual arithmetic conversions, the int is promoted to unsigned int.
 *    - Thus, the product (int) j * k is of type unsigned int.
 *
 * 3. i + (int) j * k:
 *    - Here, i (an int) is added to the result of (int) j * k (unsigned int).
 *    - In this mixed-type addition, i is promoted to unsigned int.
 *    - Therefore, the overall expression is of type unsigned int.
 *
 * Final Solution:
 * ---------------
 * The type of the expression i + (int) j * k is unsigned int.
 */
