/*
 * Chapter 7, Exercise 14 – Fractional Part Computation
 * -----------------------------------------------------
 * The statement:
 *
 *     frac_part = f - (int) f;
 *
 * is intended to compute the fractional part of a floating-point number f.
 *
 * Explanation:
 * ------------
 * - The expression subtracts the integer part of f (obtained by casting f to an int) from f.
 * - In many cases, this yields the fractional part.
 *
 * However, this approach has problems:
 * 1. For very large values of f, converting f to an int may overflow, since the range of int
 *    is limited compared to float.
 * 2. For negative values of f, (int) f truncates toward zero rather than flooring.
 *    For example, if f = -3.7, then (int) f is -3 and f - (int) f equals -0.7,
 *    whereas the correct fractional part should be 0.7.
 * 3. Floating-point precision issues may also affect the result.
 *
 * Correct Approach:
 * -----------------
 * A more robust method is to compute the fractional part using:
 *
 *     frac_part = fabs(f - floor(f));
 *
 * where floor(f) returns the largest integer less than or equal to f, and fabs ensures
 * the fractional part is non-negative.
 *
 * Final Answer:
 * -------------
 * The statement frac_part = f - (int) f does not always compute the fractional part correctly.
 * It fails for negative values (yielding a negative fraction) and may have issues with very large
 * values or floating-point precision.
 */
