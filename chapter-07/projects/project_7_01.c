/*
 * Chapter 7, Project 1 – Experiment on Square Overflow and Integer Type Sizes
 * -----------------------------------------------------------------------------
 * The square2.c program calculates i * i for a sequence of integers. If i * i
 * exceeds the maximum value that can be stored in the type of i, overflow occurs,
 * resulting in incorrect outputs.
 *
 * Experiment Results:
 * -------------------
 * 1. Using type int:
 *    - The maximum value of a typical 32-bit int is about 2,147,483,647.
 *    - The smallest value of n that causes overflow is approximately the square root
 *      of 2,147,483,647, which is about 46,340.
 *    - Thus, for n ≥ 46,341, i * i overflows.
 *
 * 2. Using type short:
 *    - A typical 16-bit short has a maximum value of 32,767.
 *    - The square root of 32,767 is approximately 181.
 *    - Therefore, for n ≥ 182, i * i overflows.
 *
 * 3. Using type long:
 *    - On many 64-bit systems, long is a 64-bit type with a maximum value of about
 *      9,223,372,036,854,775,807.
 *    - The square root of this value is roughly 3,037,000,499.
 *    - In practice, values of n this high are rarely encountered.
 *
 * Conclusion:
 * -----------
 * - The number of bits used to store each integer type determines its range:
 *    * short: 16 bits, with a range of approximately -32,768 to 32,767.
 *    * int: 32 bits, with a range of approximately -2,147,483,648 to 2,147,483,647.
 *    * long: 64 bits, with a range of approximately -9.22e18 to 9.22e18.
 *
 * - From these experiments, we can conclude that on my machine:
 *    - short is 16 bits,
 *    - int is 32 bits,
 *    - long is 64 bits.
 *
 * - The smallest n causing overflow is determined by the square root of the maximum
 *   value of the type.
 */
